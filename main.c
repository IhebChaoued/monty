#include "monty.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *filename;
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	char *instruction = strtok(line, " \t\n");
	char *arg = strtok(NULL, " \t\n");
	int n = atoi(arg);

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

	while (getline(&line, &len, file) != -1)
	{
		line_number++;

		if (instruction)
		{
			if (strcmp(instruction, "push") == 0)
			{
				if (arg)
				{
					push_stack(&stack, n);
				}
			}
			else if (strcmp(instruction, "pall") == 0)
			{
				pall(&stack, line_number);
			}
		}
	}

	if (line)
		free(line);

	fclose(file);

	return (EXIT_SUCCESS);
}
