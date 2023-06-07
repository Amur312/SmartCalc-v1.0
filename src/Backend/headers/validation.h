#ifndef SMARTCALC_V1_0_SRC_BACKEND_HEADERS_VALIDATION_H_
#define SMARTCALC_V1_0_SRC_BACKEND_HEADERS_VALIDATION_H_

#include "help.h"
#define ASCII_LOWER_BOUND 40
#define ASCII_UPPER_BOUND 122
#define ASCII_EXCEPTION_1 44
#define ASCII_EXCEPTION_RANGE_LOWER_BOUND_1 57
#define ASCII_EXCEPTION_RANGE_UPPER_BOUND_1 94
#define ASCII_EXCEPTION_RANGE_LOWER_BOUND_2 94
#define ASCII_EXCEPTION_RANGE_UPPER_BOUND_2 97

int input_array_validation(char *input_array);
int check_allowed_characters(char *input_array);
int check_amount_brackets(char *input_array);
int check_name_operators(char *input_array);
int compare_name_operators(char *potential_operator);
int check_points(char *input_array);
int find_point(char *symbol, char **start, char **point, char **end);
int check_pointers(char *symbol, char **start, char **point, char **end);
int validate_and_reset_operator(char **start, char **end);

#endif // SMARTCALC_V1_0_SRC_BACKEND_HEADERS_VALIDATION_H_
