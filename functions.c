#include "monty.h"
/**
 * freedom - free everything
 * @buf: string of chars (buffer of getline)
 * @pila: stack
 *
 * Return: void
 */
void freedom(char *buf, stack_t **pila)
{
	stack_t *aux = *pila;

	if (buf)
		free(buf);
	while (*pila)
	{
		aux = *pila;
		*pila = (*pila)->next;
		free(aux);
	}
}
/**
 * op_func - Function
 * @buff: array
 * Return: void.
 */
void (*op_func(char *buff))(stack_t **stack, unsigned int line_number)
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

	while (func[j].opcode)
	{
		if (strcmp(func[j].opcode, buff) == 0)
			return (func[j].f);
	j++;
	}
	return (NULL);
}
