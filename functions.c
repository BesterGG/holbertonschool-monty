#include "monty.h"
/**
 * split - create an array of strings from a string separated by chars
 * @buffer: string value to delimit
 * @delim: string with chars which ar delimiters
 * Return: array of string

char **split(char *buffer, char *delim)
{
	char **list = NULL;
	char *token = NULL;
	int i = 0;

	if (!buffer)
		return (NULL);
	list = malloc(1024 * sizeof(char *));
	if (!list)
		return (NULL);
	token = strtok(buffer, delim);
	while (token)
	{
		list[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	list[i] = NULL;
	return (list);
} */

/**
 * free_string_list - free memory allocated in an array of strings
 * @list: array of strings
 * Return: 0 on success, 1 on failure
 */
int free_string_list(char **list)
{
	int i = 0;

	while (list[i])
		free(list[i++]);
	free(list);
	return (0);
}
void op_func(char *buffer, unsigned int line, stack_t **head)
{
	int j = 0;
	char *token = NULL, *token2 = NULL;
	instruction_t func[] = {
	{"push", _push},
	{"pall", _pall},
	{"pint", _pint},
	{"pop", _pop},
	{"swap", _swap},
	{"add", _add},
	{"nop", _nop},
	{NULL, NULL}
	};
	token = strtok(buffer, " ");

	while (func[j].opcode != NULL)
	{
		if (strcmp(func[j].opcode, token) == 0)
		{
			if (j == 0)
			{
				token2 = strtok(NULL, " ");
				value = atoi(token2);
			}	
			func[j].f(head, line);
		}
	j++;
	}
	return (NULL);
}
