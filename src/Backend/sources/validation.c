#include "../headers/validation.h"
// Проверяет входную строку на валидность.

// Принимает input_array - входную строку для проверки.
// Возвращает код результата проверки.
int input_array_validation(char *input_array) {
  int res = OK;
  if (input_array == NULL) {
    res = MEMORY_ERROR;
  } else {
    int (*functions[4])(char *) = {check_allowed_characters,
                                   check_amount_brackets, check_name_operators,
                                   check_points};
    for (int i = 0; i < 4 && res == OK; i++) {
      res = functions[i](input_array);
    }
  }
  return res;
}
// Проверяет, содержит ли входная строка разрешенные символы.

// Принимает input_array - входную строку для проверки.
// Возвращает код результата проверки.
int check_allowed_characters(char *input_array) {
  int res = OK;
  unsigned char char_mask[ASCII_UPPER_BOUND + 1] = {0};

  for (int i = ASCII_LOWER_BOUND; i <= ASCII_UPPER_BOUND; i++) {
    if (i == ASCII_EXCEPTION_1 ||
        (i > ASCII_EXCEPTION_RANGE_LOWER_BOUND_1 &&
         i < ASCII_EXCEPTION_RANGE_UPPER_BOUND_1) ||
        (i > ASCII_EXCEPTION_RANGE_LOWER_BOUND_2 &&
         i < ASCII_EXCEPTION_RANGE_UPPER_BOUND_2)) {
      continue;
    }
    char_mask[i] = 1;
  }

  if (input_array == NULL) {
    res = MEMORY_ERROR;
  } else {
    for (size_t i = 0; input_array[i] != '\0' && res == OK; i++) {
      unsigned char character = input_array[i];
      if (character > ASCII_UPPER_BOUND || !char_mask[character]) {
        res = SYNTAX_ERROR;
      }
    }
  }

  return res;
}
// Проверяет, совпадает ли количество открывающих и закрывающих скобок во
// входной строке.

// Принимает input_array - входную строку для проверки.
// Возвращает код результата проверки.
int check_amount_brackets(char *input_array) {
  int res = MEMORY_ERROR; // предполагаем, что произошла ошибка

  if (input_array != NULL) {
    int count_brackets = 0;
    for (size_t i = 0; input_array[i] != '\0' && count_brackets >= 0; i++) {
      if (input_array[i] == '(') {
        count_brackets++;
      } else if (input_array[i] == ')') {
        count_brackets--;
      }
    }
    res = (count_brackets == 0) ? OK : SYNTAX_ERROR;
  }

  return res;
}
// Проверяет правильность использования имени оператора во входной строке.

// Принимает input_array - входную строку для проверки.
// Возвращает код результата проверки.
int check_name_operators(char *input_array) {
  int res = OK;

  if (input_array == NULL) {
    res = MEMORY_ERROR;
  } else {
    char *start = NULL;
    char *end = NULL;
    for (size_t i = 0; input_array[i] != '\0' && res == OK; i++) {
      int is_alpha = isalpha(input_array[i]);
      if (is_alpha && start == NULL) {
        start = &input_array[i];
        end = &input_array[i];
      } else if (is_alpha && start != NULL) {
        end = &input_array[i];
      }
      if (!is_alpha || input_array[i + 1] == '\0') {
        if (start != NULL) {
          res = validate_and_reset_operator(&start, &end);
        }
      }
    }
  }

  return res;
}
// Проверяет и сбрасывает оператор, содержащийся между двумя символами алфавита
// во входной строке.

// Принимает start и end - указатели на начальный и конечный символы оператора.
// Возвращает код результата проверки.
int validate_and_reset_operator(char **start, char **end) {
  int res = OK;
  size_t size = *end - *start + 1;
  if ((*start)[0] == 'a' || (*start)[0] == 'c' || (*start)[0] == 's' ||
      (*start)[0] == 't' || (*start)[0] == 'l') {
    size += 1;
  }

  char *potential_operator = init_char_array(size + 1);

  if (potential_operator == NULL) {
    res = MEMORY_ERROR;
  } else {
    potential_operator = strncpy(potential_operator, *start, size);
    res = compare_name_operators(potential_operator);
    free(potential_operator);
    *start = NULL;
    *end = NULL;
  }

  return res;
}
// Сравнивает оператор с предопределенными именами операторов.

// Принимает potential_operator - оператор для сравнения.
// Возвращает код результата проверки.
int compare_name_operators(char *potential_operator) {
  int res = OK;
  if (potential_operator == NULL) {
    res = MEMORY_ERROR;
  } else {
    int match = 1;
    const char names_operators[13][10] = {
        "mod",   "cos(", "sin(", "tan(", "acos(", "asin(", "atan(",
        "sqrt(", "ln(",  "log(", "x",    "pi",    "e"};
    for (int i = 0; i < 13 && match; i++) {
      match = strcmp(potential_operator, names_operators[i]);
    }
    if (match) {
      res = SYNTAX_ERROR;
    }
  }
  return res;
}
//  Проверяет правильность использования десятичных точек во входной строке.

// Принимает input_array - входную строку для проверки.
// Возвращает код результата проверки.
int check_points(char *input_array) {
  int res = OK;
  if (input_array == NULL) {
    res = MEMORY_ERROR;
  } else {
    size_t length = strlen(input_array);
    char *start = NULL;
    char *end = NULL;
    char *point = NULL;
    for (size_t i = 0; i < length && res == OK; i++) {
      res = find_point(&input_array[i], &start, &point, &end);
      if (res == OK) {
        res = check_pointers(&input_array[i], &start, &point, &end);
      }
      if (res == SYNTAX_ERROR) {
        start = NULL;
        end = NULL;
        point = NULL;
      }
    }
  }
  return res;
}
// Ищет десятичную точку в числе во входной строке.

// Принимает symbol - текущий символ в строке, start, point и end - указатели на
// начальный символ, точку и конечный символ числа. Возвращает код результата
// проверки.
int find_point(char *symbol, char **start, char **point, char **end) {
  int res = OK;
  if (isdigit(*symbol) && *start == NULL) {
    *start = symbol;
  } else if (isdigit(*symbol) && *start != NULL) {
    *end = symbol;
  } else if (*symbol == '.' && *point == NULL) {
    *point = symbol;
  } else if (*symbol == '.' && *point != NULL) {
    res = SYNTAX_ERROR;
    *start = NULL;
    *end = NULL;
    *point = NULL;
  }
  return res;
}
// Проверяет правильность указателей на начальный символ, точку и конечный
// символ числа во входной строке.

// Принимает symbol, start, point и end - указатели на текущий символ, начальный
// символ, точку и конечный символ числа. Возвращает код результата проверки.
int check_pointers(char *symbol, char **start, char **point, char **end) {
  int res = OK;
  if ((!(isdigit(*symbol)) && *symbol != '.') ||
      ((isdigit(*symbol) || *symbol == '.') && *(symbol + 1) == '\0')) {
    if (*point != NULL && *start != NULL && *end != NULL) {
      if (*point - *start > 0 && *end - *point > 0) {
        *start = NULL;
        *end = NULL;
        *point = NULL;
      } else {
        res = SYNTAX_ERROR;
      }
    } else if (*point != NULL && (*start == NULL || *end == NULL)) {
      res = SYNTAX_ERROR;
    } else if (*point == NULL) {
      *start = NULL;
      *end = NULL;
    }
  }
  return res;
}
