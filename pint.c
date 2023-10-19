#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: A pointer to the stack
 *
 * Description: This function prints the value
 * at the top of the stack, followed by a new line.
 * If the stack is empty, it prints an error message
 * and exits with EXIT_FAILURE.
 *
 * Return: None
 */
void pint(stack_t **stack)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
