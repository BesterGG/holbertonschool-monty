#include "monty.h"

void _push(stack_t **head, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
	{
		/**dprintf(STDERROR, algo)*/
		exit(EXIT_FAILURE);
	}
	if (value == -1)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	new->n = value;
	new->prev = NULL;
	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
	}	
	else
	{
		new->next = NULL;
	}
	*head = new;
}
/**void *add_node(stack_t **stack, int n)
{
	stack_t *new_node = NULL, *aux;


	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);
	if (!stack)
	{
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		aux = *stack;
		new_node->prev = new_node;
		new_node->next = aux;
		*stack = new_node;
	}
}
*/
void _pall(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	const stack_t *p = *head;

	for (; p; p = p->next)
	{
		if (p)
		{
			printf("%d\n", p->n);
		}
	}
}
/**
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !stack)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}*/
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;
	if (!(*stack) || !stack)
	{
		dprintf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (head->next == NULL)
	{
		*stack = NULL;
	}
	else
	{
		stack = head->next;
		head->next->prev = NULL;
	}
	free(head);
}
