#include "monty.h"

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
	unsigned int line = 0;
	stack_t *head = NULL;
	void *exe_fun = NULL;

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
