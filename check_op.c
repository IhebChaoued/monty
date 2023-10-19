#include "monty.h"

/**
 * check_op - Handle different opcodes in the Monty language
 * @stack: A pointer to the stack
 * @opcode: The opcode to be executed
 * @value: The integer value associated with the opcode (if any)
 * @line_number: The line number in the Monty bytecode file
 *
 * Description: This function handles the execution of different opcodes
 * in the Monty language. You can expand this function to include handling
 * for additional opcodes as needed.
 *
 * Return: None
 */
void check_op(stack_t **stack, const char *opcode, int value,
		unsigned int line_number)
{
	if (strcmp(opcode, "push") == 0)
	{
		push(stack, value, line_number);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack, line_number);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		pint(stack, line_number);
	}
}
