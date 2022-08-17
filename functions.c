#include "monty.h"
/**
 * split - create an array of strings from a string separated by chars
 * @buffer: string value to delimit
 * @delim: string with chars which ar delimiters
 * Return: array of string
 */
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
}
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
/**int (*op_func(char *s))(int, int)
{
	int j = 0;
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
	while (func[j].opcode != NULL)
	{
		if (*(f[j].opcode) == s[0])
		{
			return (func[j].f);
		}
	j++;
	}
	return (NULL);
}*/
