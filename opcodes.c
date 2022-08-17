#include "monty.h"

void _push(stack_t **stack, unsigned int line_number)
{

	if ()
	{
		dprintf (STDERR_FILENO, "L<%u>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		
	}
}
void *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head != NULL)
			(*head)->prev = new_node;
		*head = new_node;
	}
}
