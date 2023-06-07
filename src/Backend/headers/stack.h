#ifndef SMARTCALC_V1_0_SRC_BACKEND_HEADERS_STACK_TOKENS_H_
#define SMARTCALC_V1_0_SRC_BACKEND_HEADERS_STACK_TOKENS_H_

#include "help.h"

typedef struct stack_tokens {
  token token_object;
  struct stack_tokens *pred_token;
  int size;
} stack_tokens;

void init_token(token *token, int status, double value, char *name);
int get_priority(char symbol);
stack_tokens *init_stack();
stack_tokens *create_new_element_stack(token token_object);
stack_tokens *push_token(stack_tokens *head, token token_object);
token pop_token(stack_tokens **head);
void free_stack(stack_tokens *head);

#endif // SMARTCALC_V1_0_SRC_BACKEND_HEADERS_STACK_TOKENS_H_
