#include "../headers/rpn.h"
// Преобразует входную строку в массив токенов в обратной польской записи.
// Принимает input_array - входную строку для преобразования, и amount_tokens -
// указатель на переменную, в которой будет сохранено количество токенов.
// Возвращает указатель на массив токенов в обратной польской записи.
token *reverse_polish_notation(char *input_array, int *amount_tokens) {
  token *reverse_polish_notation_array = NULL;
  if (input_array != NULL && amount_tokens != NULL) {
    *amount_tokens = 0;
    token *token_array = get_token_array(input_array, amount_tokens);
    if (token_array != NULL) {
      int result = check_token_array(token_array, *amount_tokens);
      if (result == OK) {
        reverse_polish_notation_array =
            get_reverse_polish_notation_array(token_array, amount_tokens);
      }
      free(token_array);
      token_array = NULL;
    }
  }
  return reverse_polish_notation_array;
}
// Oбрабатывает числовой токен.
// Принимает pointer - указатель на текущую позицию в строке, amount_tokens -
// указатель на переменную, содержащую количество токенов, size_token_array -
// неиспользуемый параметр, value - указатель на переменную, в которой будет
// сохранено значение числа, name_operator - указатель на массив символов, в
// котором будет сохранено имя оператора, которое в данном случае будет пустым,
// token_array - указатель на массив токенов.
void handle_number(char **pointer, int *amount_tokens, int *size_token_array,
                   double *value, char *name_operator, token **token_array) {
  UNUSED(size_token_array);
  *value = get_value(pointer);
  init_token(&(*token_array)[*amount_tokens], enum_simple_number_status, *value,
             name_operator);
  ++(*amount_tokens);
}
// Принимает pointer - указатель на текущую позицию в строке, amount_tokens -
// указатель на переменную, содержащую количество токенов, size_token_array -
// неиспользуемый параметр, value - указатель на переменную, содержащую значение
// оператора (в данном случае будет равно 0.0), name_operator - указатель на
// массив символов, в котором будет сохранено имя оператора, token_array -
// указатель на массив токенов. Ничего не возвращает.
void handle_operator_name(char **pointer, int *amount_tokens,
                          int *size_token_array, double *value,
                          char *name_operator, token **token_array) {
  int status;
  UNUSED(size_token_array);
  get_name_operators(pointer, name_operator);
  status = get_status(name_operator[0]);
  init_token(&(*token_array)[*amount_tokens], status, *value, name_operator);
  ++(*amount_tokens);
}
// Принимает pointer - указатель на текущую позицию в строке, amount_tokens -
// указатель на переменную, содержащую количество токенов, size_token_array -
// неиспользуемый параметр, value - указатель на переменную, содержащую значение
// оператора (в данном случае будет равно 0.0), name_operator - указатель на
// массив символов, в котором будет сохранено имя оператора, token_array -
// указатель на массив токенов.
void handle_operator(char **pointer, int *amount_tokens, int *size_token_array,
                     double *value, char *name_operator, token **token_array) {
  UNUSED(size_token_array);
  name_operator[0] = **pointer;
  ++(*pointer);
  init_token(&(*token_array)[*amount_tokens], enum_operator_status, *value,
             name_operator);
  ++(*amount_tokens);
}
// Принимает input_array - входную строку для преобразования, и amount_tokens -
// указатель на переменную, в которой будет сохранено количество токенов.
// Возвращает указатель на массив токенов.
token *get_token_array(char *input_array, int *amount_tokens) {
  token *token_array = NULL;
  if (input_array != NULL && amount_tokens != NULL) {
    *amount_tokens = 0;
    char *pointer = input_array;
    double value = 0.0;
    int size_token_array = 5;
    token_array = init_token_array(size_token_array);
    char *name_operator = init_char_array(3);
    while (*pointer != '\0') {
      if (*amount_tokens == size_token_array - 1) {
        token_array = realloc_token_array(token_array, &size_token_array);
      }
      if (isdigit(*pointer)) {
        handle_number(&pointer, amount_tokens, &size_token_array, &value,
                      name_operator, &token_array);
      } else if (isalpha(*pointer)) {
        handle_operator_name(&pointer, amount_tokens, &size_token_array, &value,
                             name_operator, &token_array);
      } else {
        handle_operator(&pointer, amount_tokens, &size_token_array, &value,
                        name_operator, &token_array);
      }
      value = 0.0;
      memset(name_operator, '\0', 3);
    }
    if (!(*amount_tokens)) {
      free(token_array);
      token_array = NULL;
    }
    free(name_operator);
  }
  return token_array;
}
//Инициализирует массив токенов.

// Принимает amount_tokens - количество токенов в массиве.
// Возвращает указатель на инициализированный массив токенов.
token *init_token_array(const int amount_tokens) {
  return (token *)calloc(amount_tokens, sizeof(token));
}
// Переаллоцирует память для массива токенов.

// Принимает token_array - указатель на текущий массив токенов, и prev_size -
// указатель на переменную, содержащую предыдущий размер массива. Возвращает
// указатель на переаллоцированный массив токенов.
token *realloc_token_array(token *token_array, int *prev_size) {
  *prev_size *= 2;
  token_array = (token *)realloc(token_array, *prev_size * sizeof(token));
  return token_array;
}
//Извлекает числовое значение из строки.

// Принимает pointer - указатель на текущую позицию в строке.
// Возвращает числовое значение.
double get_value(char **pointer) {
  double value = 0.0;
  if (pointer != NULL) {
    int start_length = 5;
    char *number = init_char_array(start_length);
    int i = 0;
    while (isdigit(**pointer) || **pointer == '.') {
      if (i == start_length - 1) {
        number = realloc_char_array(number, &start_length);
      }
      number[i++] = **pointer;
      ++(*pointer);
    }
    number[i] = '\0';
    setlocale(LC_NUMERIC, "C");
    value = strtod(number, NULL);
    free(number);
    number = NULL;
  }
  return value;
}
//звлекает имя оператора из строки.

// Принимает pointer - указатель на текущую позицию в строке, name_operator -
// указатель на массив символов, в котором будет сохранено имя оператора.
void get_name_operators(char **pointer, char *name_operator) {
  if (pointer != NULL && name_operator != NULL) {
    switch (**pointer) {
    case 'm':
    case 'c':
    case 't':
      name_operator[0] = **pointer;
      *pointer += 3;
      break;
    case 'p':
      name_operator[0] = **pointer;
      *pointer += 2;
      break;
    case 's':
      strncpy(name_operator, *pointer, 2);
      ++(*pointer);
      *pointer += (**pointer == 'i') ? 2 : 3;
      break;
    case 'a':
      strncpy(name_operator, *pointer, 2);
      *pointer += 4;
      break;
    case 'l':
      name_operator[0] = **pointer;
      ++(*pointer);
      name_operator[1] = (**pointer == 'n') ? **pointer : 'g';
      *pointer += (**pointer == 'n') ? 1 : 2;
      break;
    default:
      name_operator[0] = **pointer;
      ++(*pointer);
      break;
    }
  }
}
// Возвращает статус оператора или функции.

// Принимает symbol - символ оператора или функции.
// Возвращает статус.
int get_status(char symbol) {
  int status = -1;
  if (symbol == 'p' || symbol == 'x' || symbol == 'e') {
    status = enum_special_number_status;
  } else if (symbol == 'm') {
    status = enum_operator_status;
  } else {
    status = enum_function_status;
  }
  return status;
}
// Принимает current_token - текущий токен числа, reverse_polish_notation_array
// - массив обратной польской записи,
//  и count - указатель на переменную, содержащую текущее количество токенов.
void handle_number_token(token current_token,
                         token *reverse_polish_notation_array, int *count) {
  reverse_polish_notation_array[*count] = current_token;
  (*count)++;
}
// Обрабатывает токен функции при создании массива обратной польской записи.

// Принимает current_token - текущий токен функции, и stack_operators -
// указатель на стек операторов.
void handle_function_token(token current_token,
                           stack_tokens **stack_operators) {
  *stack_operators = push_token(*stack_operators, current_token);
}
// Обрабатывает токен оператора при создании массива обратной польской записи.

// Принимает current_token - текущий токен оператора,
// reverse_polish_notation_array - массив обратной польской записи,
// stack_operators - указатель на стек операторов, и count - указатель на
// переменную, содержащую текущее количество токенов.
void handle_operator_token(token current_token,
                           token *reverse_polish_notation_array,
                           stack_tokens **stack_operators, int *count) {
  if (current_token.priority == enum_right_bracket_priority) {
    *stack_operators = operator_is_right_bracket(reverse_polish_notation_array,
                                                 *stack_operators, count);
  } else if (current_token.priority == enum_left_bracket_priority ||
             (*stack_operators)->size == 0 ||
             current_token.priority >
                 (*stack_operators)->token_object.priority) {
    *stack_operators = push_token(*stack_operators, current_token);
  } else if (current_token.priority <=
             (*stack_operators)->token_object.priority) {
    *stack_operators = priority_is_less(
        current_token, reverse_polish_notation_array, *stack_operators, count);
  }
}
// Преобразует массив токенов в обратной польской записи.

// Принимает token_array - массив токенов, и amount_tokens - указатель на
// переменную, содержащую количество токенов. Возвращает указатель на массив
// токенов в обратной польской записи.
token *get_reverse_polish_notation_array(token *token_array,
                                         int *amount_tokens) {
  token *reverse_polish_notation_array = NULL;
  if (token_array != NULL) {
    reverse_polish_notation_array = init_token_array(*amount_tokens);
    stack_tokens *stack_operators = init_stack();
    int count = 0;
    for (int i = 0; i < *amount_tokens; ++i) {
      if (token_array[i].status == enum_simple_number_status ||
          token_array[i].status == enum_special_number_status) {
        handle_number_token(token_array[i], reverse_polish_notation_array,
                            &count);
      } else if (token_array[i].status == enum_function_status) {
        handle_function_token(token_array[i], &stack_operators);
      } else {
        handle_operator_token(token_array[i], reverse_polish_notation_array,
                              &stack_operators, &count);
      }
    }
    cleaning_stack_operators(reverse_polish_notation_array, stack_operators,
                             &count);
    *amount_tokens = count;
  }
  return reverse_polish_notation_array;
}
// Перемещает операторы в выходной массив до левой скобки.
// Принимает reverse_polish_notation_array - массив обратной польской записи,
// stack_operators - указатель на стек операторов, и count - указатель на
// переменную, содержащую текущее количество токенов.
void move_operators_to_output_until_left_bracket(
    token *reverse_polish_notation_array, stack_tokens **stack_operators,
    int *count) {
  while ((*stack_operators)->size != 0 &&
         (*stack_operators)->token_object.priority !=
             enum_left_bracket_priority) {
    reverse_polish_notation_array[(*count)++] = pop_token(stack_operators);
  }
}
//Обрабатывает случай отсутствия левой скобки при создании массива обратной
//польской записи.
// Принимает reverse_polish_notation_array - массив обратной польской записи,
// stack_operators - указатель на стек операторов, и count - указатель на
// переменную, содержащую текущее количество токенов.
void handle_missing_left_bracket(token *reverse_polish_notation_array,
                                 stack_tokens **stack_operators, int *count) {
  if ((*stack_operators)->token_object.priority != enum_left_bracket_priority) {
    free_stack(*stack_operators);
    free(reverse_polish_notation_array);
    reverse_polish_notation_array = NULL;
    *count = 0;
  } else {
    pop_token(stack_operators);
  }
}
// Перемещает функцию в выходной массив.

// Принимает reverse_polish_notation_array - массив обратной польской записи,
// stack_operators - указатель на стек операторов, и count - указатель на
// переменную, содержащую текущее количество токенов.
void move_function_to_output(token *reverse_polish_notation_array,
                             stack_tokens **stack_operators, int *count) {
  if ((*stack_operators)->token_object.status == enum_function_status) {
    reverse_polish_notation_array[(*count)++] = pop_token(stack_operators);
  }
}
// Обрабатывает случай, когда текущий оператор является правой скобкой при
// создании массива обратной польской записи.

// Принимает reverse_polish_notation_array - массив обратной польской записи,
// stack_operators - указатель на стек операторов, и count - указатель на
// переменную, содержащую текущее количество токенов.
stack_tokens *operator_is_right_bracket(token *reverse_polish_notation_array,
                                        stack_tokens *stack_operators,
                                        int *count) {
  if (reverse_polish_notation_array != NULL && stack_operators != NULL &&
      count != NULL) {
    move_operators_to_output_until_left_bracket(reverse_polish_notation_array,
                                                &stack_operators, count);
    handle_missing_left_bracket(reverse_polish_notation_array, &stack_operators,
                                count);
    move_function_to_output(reverse_polish_notation_array, &stack_operators,
                            count);
  }
  return stack_operators;
}
// Обрабатывает случай, когда текущий оператор имеет меньший приоритет, чем
// оператор на вершине стека, при создании массива обратной польской записи.

// Принимает token_object - текущий токен оператора,
// reverse_polish_notation_array - массив обратной польской записи,
// stack_operators - указатель на стек операторов, и count - указатель на
// переменную, содержащую текущее количество токенов. Возвращает указатель на
// стек операторов.
stack_tokens *priority_is_less(const token token_object,
                               token *reverse_polish_notation_array,
                               stack_tokens *stack_operators, int *count) {
  if (reverse_polish_notation_array != NULL && stack_operators != NULL &&
      count != NULL) {
    while (stack_operators->size != 0 &&
           token_object.priority <= stack_operators->token_object.priority) {
      reverse_polish_notation_array[(*count)++] = pop_token(&stack_operators);
    }
    stack_operators = push_token(stack_operators, token_object);
  }
  return stack_operators;
}
// Очищает стек операторов и переносит оставшиеся операторы в массив обратной
// польской записи.

// Принимает reverse_polish_notation_array - массив обратной польской записи,
// stack_operators - указатель на стек операторов, и count - указатель на
// переменную, содержащую текущее количество токенов.
void cleaning_stack_operators(token *reverse_polish_notation_array,
                              stack_tokens *stack_operators, int *count) {
  if (reverse_polish_notation_array != NULL && stack_operators != NULL &&
      count != NULL) {
    while (stack_operators->size != 0) {
      reverse_polish_notation_array[(*count)++] = pop_token(&stack_operators);
    }
    free_stack(stack_operators);
  }
}
//  Проверяет корректность массива токенов.

// Принимает token_array - массив токенов, и amount_tokens - количество токенов
// в массиве. Возвращает код результата проверки.
int check_token_array(token *token_array, const int amount_tokens) {
  int res = OK;
  if (token_array == NULL) {
    res = MEMORY_ERROR;
  } else {
    int (*functions[3])(token *, const int) = {
        find_unar_operators, find_empty_brackets, check_functions};
    for (int i = 0; i < 3 && res == OK; ++i) {
      res = functions[i](token_array, amount_tokens);
    }
  }
  return res;
}
//Проверяет, является ли позиция оператора унарным.

// Принимает i - текущую позицию оператора, token_array - массив токенов, и
// amount_tokens - количество токенов в массиве. Возвращает логическое значение,
// указывающее, является ли позиция оператора унарным.
bool is_unar_operator_position(int i, token *token_array,
                               const int amount_tokens) {
  bool unar_operator_position = false;
  unar_operator_position =
      (i == 0 || (i != 0 && token_array[i - 1].status == enum_operator_status &&
                  token_array[i - 1].priority == enum_left_bracket_priority)) &&
      i != amount_tokens - 1 &&
      (token_array[i + 1].status == enum_function_status ||
       token_array[i + 1].status == enum_simple_number_status ||
       token_array[i + 1].status == enum_special_number_status);

  return unar_operator_position;
}
// Обновляет приоритет унарного оператора.

// Принимает token_array - массив токенов, и i - текущую позицию оператора.
void update_unar_operator_priority(token *token_array, int i) {
  if (token_array[i].name[0] == '+') {
    token_array[i].priority = enum_unar_sum_priority;
  } else {
    token_array[i].priority = enum_unar_sub_priority;
  }
}
// Проверяет массив токенов на наличие унарных операторов и обновляет их
// приоритеты.

// Принимает token_array - массив токенов, и amount_tokens - количество токенов
// в массиве. Возвращает код результата проверки.
int find_unar_operators(token *token_array, const int amount_tokens) {
  int status = OK;
  if (token_array != NULL) {
    for (int i = 0; i < amount_tokens; ++i) {
      if (token_array[i].status == enum_operator_status &&
          token_array[i].priority == enum_sum_priority) {
        if (!is_unar_operator_position(i, token_array, amount_tokens)) {
          continue;
        }
        update_unar_operator_priority(token_array, i);
      }
    }
  } else {
    status = MEMORY_ERROR;
  }
  return status;
}
// Проверяет массив токенов на наличие пустых скобок.

// Принимает token_array - массив токенов, и amount_tokens - количество токенов
// в массиве. Возвращает код результата проверки.
int find_empty_brackets(token *token_array, const int amount_tokens) {
  int status = OK;
  if (token_array != NULL) {
    for (int i = 0; i < amount_tokens - 1; ++i) {
      if (token_array[i].status == enum_operator_status &&
          token_array[i].priority == enum_left_bracket_priority &&
          token_array[i + 1].status == enum_operator_status &&
          token_array[i + 1].priority == enum_right_bracket_priority) {
        status = SYNTAX_ERROR;
        break;
      }
    }
  } else {
    status = MEMORY_ERROR;
  }
  return status;
}
// Проверяет массив токенов на корректное использование функций.

// Принимает token_array - массив токенов, и amount_tokens - количество токенов
// в массиве. Возвращает код результата проверки.
int check_functions(token *token_array, const int amount_tokens) {
  int status = OK;
  if (token_array != NULL) {
    for (int i = 1; i < amount_tokens; ++i) {
      if (token_array[i].status == enum_function_status &&
          token_array[i - 1].status == enum_operator_status &&
          (token_array[i - 1].priority == enum_right_bracket_priority ||
           token_array[i - 1].priority == enum_mod_priority)) {
        status = SYNTAX_ERROR;
        break;
      }
    }
  } else {
    status = MEMORY_ERROR;
  }
  return status;
}
