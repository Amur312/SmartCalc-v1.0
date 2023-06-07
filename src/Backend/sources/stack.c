#include "../headers/stack.h"

void init_token(token *token_object, int status, double value, char *name) {
  if (token_object != NULL) {
    token_object->status = status;
    token_object->value = value;
    strcpy(token_object->name, name);
    token_object->priority = get_priority(name[0]);
  }
}

int get_priority(char symbol) {
  int priority = 0;
  switch (symbol) {
  case '+':
  case '-':
    priority = enum_sum_priority;
    break;
  case '*':
  case '/':
    priority = enum_mul_priority;
    break;
  case '^':
    priority = enum_pow_priority;
    break;
  case 'm':
    priority = enum_mod_priority;
    break;
  case ')':
    priority = enum_right_bracket_priority;
    break;
  default:
    priority = enum_left_bracket_priority;
  }
  return priority;
}

stack_tokens *init_stack() {
  stack_tokens *head = (stack_tokens *)malloc(sizeof(stack_tokens));
  if (head != NULL) {
    head->pred_token = NULL;
    head->size = 0;
  }
  return head;
}

stack_tokens *create_new_element_stack(token token_object) {
  stack_tokens *head = (stack_tokens *)malloc(sizeof(stack_tokens));
  if (head != NULL) {
    head->token_object = token_object;
    head->pred_token = NULL;
    head->size = 0;
  }
  return head;
}

stack_tokens *push_token(stack_tokens *head, token token_object) {
  stack_tokens *res = head;
  if (head != NULL && head->size == 0) {
    head->token_object = token_object;
    ++(head->size);
  } else if (head != NULL && head->size != 0) {
    stack_tokens *new_token = create_new_element_stack(token_object);
    if (new_token != NULL) {
      res = new_token;
      new_token->pred_token = head;
      new_token->size = head->size + 1;
    }
  }
  return res;
}

token pop_token(stack_tokens **head) {
  token res = (*head)->token_object;
  if ((*head)->size == 1) {
    (*head)->size = 0;
  } else {
    stack_tokens *tmp = (*head);
    (*head) = (*head)->pred_token;
    free(tmp);
  }
  return res;
}

void free_stack(stack_tokens *head) {
  if (head != NULL) {
    while (head->pred_token != NULL) {
      pop_token(&head);
    }
    free(head);
    head = NULL;
  }
}

char *init_char_array(const int length) {
  return (char *)calloc(length, sizeof(char));
}

char *realloc_char_array(char *char_arr, int *pred_length_arr) {
  *pred_length_arr *= 2;
  char_arr = (char *)realloc(char_arr, *pred_length_arr * sizeof(char));
  return char_arr;
}
