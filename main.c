#include "monty.h"
/**
 * main - Algo
 * @argc: Number
 * @argv: array 
 * Return: Algo
*/
int main(argc, **argv)
{
	size_t len = 0; //PA QUE LO DEFINISTE?
	char buffer[1024], *delim = " \t\n", **list;
	FILE *fp;
	
	if (argc != 1)
	{
	    dprintf (STDERR_FILENO, "USAGE: monty file\n");
	    exit (EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf (STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}
    while(fgets(buffer, 1024, fp))
    {
        list = split(buffer, delim);
        printf("%s%s\n", list[0], list[1]);
    }
    fclose(fp);
	return (0);
}
