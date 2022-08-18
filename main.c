#include "monty.h"

/**
 * main - Algo
 * @argc: Number
 * @argv: array 
 * Return: Algo
*/
int main(int argc, char *argv[])
{
	char buffer[1024];
	FILE *fp;
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
		op_func(buffer, line, &head);
		line++;
	}
	free_string_list(head);
	fclose(fp);
	return (0);
}
