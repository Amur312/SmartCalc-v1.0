#include "../headers/calc.h"

// Эта функция обрабатывает массив токенов, представляющих обратную польскую
// запись (RPN),
// в соответствии с переданным значением x и возвращает стек токенов после
// обработки.
stack_tokens *process_rpn(token *rpn_array, const int token_count,
                          const double x_value) {
  if (rpn_array == NULL) {
    return NULL;
  }
  stack_tokens *stack_value = init_stack();
  set_special_number(rpn_array, token_count, x_value);
  for (int i = 0; i < token_count && stack_value != NULL; ++i) {
    if (rpn_array[i].status == enum_simple_number_status) {
      stack_value = push_token(stack_value, rpn_array[i]);
    } else if (rpn_array[i].status == enum_function_status) {
      stack_value = functions_workspace(rpn_array[i], stack_value);
    } else if (rpn_array[i].status == enum_operator_status) {
      stack_value = operators_workspace(rpn_array[i], stack_value);
    }
  }
  return stack_value;
}
// Эта функция принимает массив токенов, представляющих RPN, количество
// токенов, значение x и указатель на результат.
// Она обрабатывает массив, выполняет вычисления и сохраняет результат в
// указанную переменную. Возвращает код ошибки или подтверждение успешного
// выполнения.
int calculation(token *rpn_array, const int token_count, const double x_value,
                double *result) {
  if (rpn_array == NULL || result == NULL) {
    return MEMORY_ERROR;
  }
  *result = 0.0;
  stack_tokens *stack_value = process_rpn(rpn_array, token_count, x_value);
  if (stack_value != NULL && stack_value->size == 1) {
    *result = stack_value->token_object.value;
    free_stack(stack_value);
    return OK;
  } else {
    if (stack_value != NULL) {
      free_stack(stack_value);
    }
    return SYNTAX_ERROR;
  }
}
// Эта функция обновляет значения специальных чисел (таких как переменная 'x',
// число Пи 'p' и экспонента 'e') в массиве RPN.
void set_special_number(token *reverse_polish_notation_array,
                        const int amount_tokens, const double x_value) {
  if (reverse_polish_notation_array != NULL) {
    for (int i = 0; i < amount_tokens; ++i) {
      if (reverse_polish_notation_array[i].status ==
          enum_special_number_status) {
        reverse_polish_notation_array[i].value = get_value_special_number(
            reverse_polish_notation_array[i].name[0], x_value);
        reverse_polish_notation_array[i].status = enum_simple_number_status;
      }
    }
  }
}
// Эта функция обрабатывает функции в RPN, применяя их к токенам в стеке.
stack_tokens *functions_workspace(const token token_object,
                                  stack_tokens *stack_value) {
  if (stack_value != NULL) {
    if (stack_value->size != 0) {
      double value = stack_value->token_object.value;
      pop_token(&stack_value);
      double result = functions_selector(token_object.name, value);
      token *new_token = (token *)calloc(1, sizeof(token));
      init_token(new_token, enum_simple_number_status, result, "\0");
      stack_value = push_token(stack_value, *new_token);
      free(new_token);
      new_token = NULL;
    } else {
      free_stack(stack_value);
      stack_value = NULL;
    }
  }
  return stack_value;
}
// Эта функция возвращает значение специального числа в соответствии с
// переданным символом.
double get_value_special_number(char symbol, const double x_value) {
  double value = 0.0;
  switch (symbol) {
  case 'x':
    value = x_value;
    break;
  case 'p':
    value = PI;
    break;
  case 'e':
    value = C_E;
    break;
  }
  return value;
}
// Эта функция выбирает и применяет математическую функцию к значению на основе
// имени функции.
double functions_selector(const char *name_function, const double value) {
  double result = 0.0;
  if (name_function != NULL) {
    double (*functions[])(double) = {cos,   tan,  sin,  sqrt, log,
                                     log10, acos, asin, atan};
    const char names_token_functions[][3] = {"c",  "t",  "si", "sq", "ln",
                                             "lg", "ac", "as", "at"};
    int i = 0;
    for (int match = 1;
         (unsigned long)i < sizeof(functions) / sizeof(functions[0]) && match;

         ++i) {
      match = strcmp(name_function, names_token_functions[i]);
    }
    result = functions[i - 1](value);
  }
  return result;
}
// Эта функция обрабатывает унарный минус, умножая значение токена на стеке на
// -1.
stack_tokens *process_unary_minus(stack_tokens *stack_value) {
  stack_value->token_object.value *= -1;
  return stack_value;
}
// Эта функция выполняет операцию на двух верхних значениях стека, заменяя их
// результатом.
stack_tokens *perform_operation(const token token_object,
                                stack_tokens *stack_value) {
  double value_2 = stack_value->token_object.value;
  pop_token(&stack_value);
  double value_1 = stack_value->token_object.value;
  pop_token(&stack_value);
  double result = operators_selector(token_object.name, value_1, value_2);
  token *new_token = (token *)calloc(1, sizeof(token));
  init_token(new_token, enum_simple_number_status, result, "\0");
  stack_value = push_token(stack_value, *new_token);
  free(new_token);
  new_token = NULL;
  return stack_value;
}
// Эта функция обрабатывает операторы в RPN, применяя их к токенам в стеке.
stack_tokens *operators_workspace(const token token_object,
                                  stack_tokens *stack_value) {
  if (stack_value != NULL) {
    if (stack_value->size != 0) {
      if (token_object.priority == enum_unar_sub_priority &&
          token_object.name[0] == '-') {
        stack_value = process_unary_minus(stack_value);
      } else if (token_object.priority != enum_unar_sub_priority &&
                 stack_value->size >= 2) {
        stack_value = perform_operation(token_object, stack_value);
      } else if (token_object.priority != enum_unar_sum_priority) {
        free_stack(stack_value);
        stack_value = NULL;
      }
    }
  } else {
    free_stack(stack_value);
    stack_value = NULL;
  }
  return stack_value;
}
// Эта функция выбирает и применяет оператор к двум значениям на основе имени
// оператора.
double operators_selector(const char *name_function, const double value_1,
                          const double value_2) {
  double result = 0.0;
  if (name_function != NULL) {
    double (*functions[])(double, double) = {my_sum, my_sub, my_mul,
                                             my_div, pow,    fmod};
    const char names_token_operators[][3] = {"+", "-", "*", "/", "^", "m"};
    int i = 0;
    for (int match = 1;
         (unsigned long)i < sizeof(functions) / sizeof(functions[0]) && match;

         ++i) {
      match = strcmp(name_function, names_token_operators[i]);
    }
    result = functions[i - 1](value_1, value_2);
  }
  return result;
}

double my_sum(double value_1, double value_2) { return value_1 + value_2; }

double my_sub(double value_1, double value_2) { return value_1 - value_2; }

double my_mul(double value_1, double value_2) { return value_1 * value_2; }

double my_div(double value_1, double value_2) { return value_1 / value_2; }
