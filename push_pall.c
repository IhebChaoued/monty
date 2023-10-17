#include "monty.h"

/**
 * push - Pushes an integer onto the stack
 * @stack: A pointer to the pointer to the stack
 * @line_number: The current line number in the Monty bytecode file
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \t\n");
	int n;

	if (!arg || !is_integer(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = atoi(arg);
	if (!push_stack(stack, n))
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * pall - Prints all values on the stack
 * @stack: A pointer to the pointer to the stack
 * @line_number: The current line number in the Monty bytecode file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
