#ifndef SMARTCALC_V1_0_SRC_BACKEND_HEADERS_REVERSE_POLISH_NOTATION_H_
#define SMARTCALC_V1_0_SRC_BACKEND_HEADERS_REVERSE_POLISH_NOTATION_H_

#include <locale.h>

#include "help.h"
#include "stack.h"
#include "stdbool.h"
#define UNUSED(x) (void)(x)
token *reverse_polish_notation(char *input_array, int *amount_tokens);
token *get_token_array(char *input_array, int *amount_tokens);

double get_value(char **pointer);
void get_name_operators(char **pointer, char *name_operator);
int get_status(char symbol);
token *get_reverse_polish_notation_array(token *token_array,
                                         int *amount_tokens);
stack_tokens *operator_is_right_bracket(token *reverse_polish_notation_array,
                                        stack_tokens *stack_operators,
                                        int *count);
stack_tokens *priority_is_less(const token token_object,
                               token *reverse_polish_notation_array,
                               stack_tokens *stack_operators, int *count);
void cleaning_stack_operators(token *reverse_polish_notation_array,
                              stack_tokens *stack_operators, int *count);
int check_token_array(token *token_array, const int amount_tokens);
int find_unar_operators(token *token_array, const int amount_tokens);
int find_empty_brackets(token *token_array, const int amount_tokens);
int check_functions(token *token_array, const int amount_tokens);
token *init_token_array(const int amount_tokens);
token *realloc_token_array(token *token_array, int *prev_size);
void handle_number(char **pointer, int *amount_tokens, int *size_token_array,
                   double *value, char *name_operator, token **token_array);
void handle_operator_name(char **pointer, int *amount_tokens,
                          int *size_token_array, double *value,
                          char *name_operator, token **token_array);
void handle_operator(char **pointer, int *amount_tokens, int *size_token_array,
                     double *value, char *name_operator, token **token_array);

void handle_number_token(token current_token,
                         token *reverse_polish_notation_array, int *count);
void handle_function_token(token current_token, stack_tokens **stack_operators);
void handle_operator_token(token current_token,
                           token *reverse_polish_notation_array,
                           stack_tokens **stack_operators, int *count);
void move_operators_to_output_until_left_bracket(
    token *reverse_polish_notation_array, stack_tokens **stack_operators,
    int *count);
void handle_missing_left_bracket(token *reverse_polish_notation_array,
                                 stack_tokens **stack_operators, int *count);
void move_function_to_output(token *reverse_polish_notation_array,
                             stack_tokens **stack_operators, int *count);
bool is_unar_operator_position(int i, token *token_array,
                               const int amount_tokens);
void update_unar_operator_priority(token *token_array, int i);
#endif // SMARTCALC_V1_0_SRC_BACKEND_HEADERS_REVERSE_POLISH_NOTATION_H_