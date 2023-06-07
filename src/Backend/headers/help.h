#ifndef SMARTCALC_V1_0_SRC_BACKEND_HEADERS_COMMON_H_
#define SMARTCALC_V1_0_SRC_BACKEND_HEADERS_COMMON_H_

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define SYNTAX_ERROR_LINE "Syntax error!"
#define INVALID_DATA_LINE "Invalid data!"

typedef enum CodeErrors { OK, SYNTAX_ERROR, MEMORY_ERROR } CodeErrors;

typedef enum status {
  enum_simple_number_status,
  enum_special_number_status,
  enum_operator_status,
  enum_function_status
} status;

typedef enum priority {
  enum_left_bracket_priority,
  enum_sum_priority,
  enum_sub_priority = 1,
  enum_mul_priority,
  enum_div_priority = 2,
  enum_pow_priority,
  enum_mod_priority,
  enum_unar_sum_priority,
  enum_unar_sub_priority = 5,
  enum_right_bracket_priority,
} priority;

typedef struct token {
  int status;
  double value;
  char name[3];
  int priority;
} token;

char *init_char_array(const int length);
char *realloc_char_array(char *char_arr, int *pred_length_arr);

#endif // SMARTCALC_V1_0_SRC_BACKEND_HEADERS_COMMON_H_
