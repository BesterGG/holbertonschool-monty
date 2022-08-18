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
void op_func(char *buffer, unsigned int line, stack_t **head)
{
	int j = 0, value = 0;
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

	while (func[j].opcode != NULL)
	{
		if (strcmp(func[j].opcode, token) == 0)
		{
			return (func[j].opcode);
		}
	j++;
	}
	if (!func[i].opcode)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", n, s);
		exit(EXIT_FAILURE);	
	}
	return;
}
