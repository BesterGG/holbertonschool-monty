#include "monty.h"
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
instruction_t op_func(char *buffer)
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
		if (strcmp(func[j].opcode, buffer) == 0)
		{
			return (func[j]);
		}
	j++;
	}
	return (func[j]);
}
