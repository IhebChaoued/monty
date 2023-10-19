#include "monty.h"

/**
 * check_op - Handle different opcodes in the Monty language
 * @stack: A pointer to the stack
 * @opcode: The opcode to be executed
 * @value: The integer value associated with the opcode (if any)
 *
 * Description: This function handles the execution of different opcodes
 * in the Monty language. You can expand this function to include handling
 * for additional opcodes as needed.
 *
 * Return: None
 */
void check_op(stack_t **stack, const char *opcode, int value)
{
	if (strcmp(opcode, "push") == 0)
	{
		push(stack, value);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack);
	}
}
