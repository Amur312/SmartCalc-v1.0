#ifndef SMARTCALC_V1_0_SRC_BACKEND_HEADERS_CALCULATION_H_
#define SMARTCALC_V1_0_SRC_BACKEND_HEADERS_CALCULATION_H_

#include <math.h>

#include "help.h"
#include "stack.h"

#define PI 3.14159265358979323846
#define C_E 2.7182818284590452354

int calculation(token *rpn_array, const int tokenCount, const double x_value,
                double *result);
stack_tokens *process_rpn(token *rpn_array, const int token_count,
                          const double x_value);
void set_special_number(token *rpn_array, const int tokenCount,
                        const double x_value);
stack_tokens *functions_workspace(const token token_object,
                                  stack_tokens *stack_value);
double get_value_special_number(char symbol, const double x_value);
double functions_selector(const char *name_function, const double value);
stack_tokens *operators_workspace(const token token_object,
                                  stack_tokens *stack_value);
double operators_selector(const char *name_function, const double value_1,
                          const double value_2);
stack_tokens *perform_operation(const token token_object,
                                stack_tokens *stack_value);
stack_tokens *process_unary_minus(stack_tokens *stack_value);
double my_sum(double value_1, double value_2);
double my_sub(double value_1, double value_2);
double my_mul(double value_1, double value_2);
double my_div(double value_1, double value_2);

#endif // SMARTCALC_V1_0_SRC_BACKEND_HEADERS_CALCULATION_H_
