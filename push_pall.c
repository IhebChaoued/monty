#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: A pointer to the stack
 * @value: The integer value to be pushed onto the stack
 * @line_number: The line number in the Monty bytecode file
 *
 * Description: This function allocates memory for a new node, assigns the
 * provided integer value to it, and adds it to the stack.
 *
 * Return: None
 */
void push(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "L%uError: malloc failed\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (value < INT_MIN || value > INT_MAX)
	{
		fprintf(stderr, "L%u: Error: usage: push integer\n", line_number);
		free(new_node);
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * pall - Prints all values on the stack
 * @stack: A pointer to the stack
 *
 * Description: This function prints all the values in the stack from top to
 * bottom. If the stack is empty, it doesn't print anything.
 *
 * Return: None
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
