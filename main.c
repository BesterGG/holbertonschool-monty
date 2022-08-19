#include "monty.h"
int value = -1;
/**
 * main - Algo
 * @argc: Number
 * @argv: array 
 * Return: Algo
*/
int main(int argc, char *argv[])
{
	char buffer[1024], *token = NULL;
	FILE *fp;
	int j = 1;
	instruction_t funcs;
	unsigned int line = 0;
	stack_t *head = NULL;

	(void)argc;
	if (argc < 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 1024, fp))
	{
		token = strtok(buffer, " \n\t $");
		if (!token)
			continue;
		funcs = op_func(token);
		if (!funcs.f)
		{
			fprintf(stderr, "L%d: unknown instruction %s", j, token);
			exit(EXIT_FAILURE);
		}
		(*(funcs.f))(&head, j);
		line++;
	}
	fclose(fp);
	return (0);
}
