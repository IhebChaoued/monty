#include "monty.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	const char *filename;
	FILE *file;
	char buffer[128];
	stack_t *stack = NULL;
	char *opcode;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	filename = argv[1];
	file = fopen(filename, "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	while (fgets(buffer, sizeof(buffer), file))
	{
		line_number++;
		opcode = strtok(buffer, " \t\n$");

		if (opcode)
		{
			char *value_str = strtok(NULL, " \t\n$");
			int value = value_str ? atoi(value_str) : 0;

			push(&stack, value, line_number);
		}
	}

	fclose(file);

	return (0);
}
