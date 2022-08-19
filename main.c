#include "monty.h"
char *gg = NULL;
/**
 * main - main function
 * @argc: int
 * @argv: array
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char buffer[1024], *token = NULL;
	FILE *fp;
	int j = 0;
	int line_number = 0;
	void (*opcode_func)(stack_t **stack, unsigned int line_number);
	stack_t *head = NULL;
	void *exe_fun = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 1024, fp))
	{
		j++;
		token = strtok(buffer, "\n\t $");
		if (!token)
			continue;
		opcode_func = op_func(token);
		if (!opcode_func)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
			fclose(fp);
			exit(EXIT_FAILURE);
		}
		opcode_func(&head, line_number);
	}
		token = strtok(buffer, " \t\n");
		exe_fun = op_func(token, line, &head);
		if (exe_fun)
			exe_fun(&head, line);
		line++;
		
	}
	free_string_list(*head);
	fclose(fp);
	return (0);
}
