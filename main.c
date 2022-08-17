#include "monty.h"
/**
 * main - Algo
 * @argc: Number
 * @argv: array 
 * Return: Algo
*/
int main(int argc, char *argv[])
{
	char buffer[1024], *delim = " \t\n", **list;
	FILE *fp;

	(void)argc;
	if (argc < 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, 1024, fp))
	{
		list = split(buffer, delim);
		/**if (list[1])
			value =	atoi(list[1]);
		else
			value = -1; */
	}
	free(list);
	fclose(fp);
	return (0);
}
