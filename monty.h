#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Define your stack structure */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);

int is_integer(const char *str);
int push_stack(stack_t **stack, int value);

#endif /* MONTY_H */
