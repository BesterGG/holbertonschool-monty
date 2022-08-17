#include "monty.h"
/**
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
		exit(EXIT_FAILURE);
	if ()
	{

	}
	else
	{
		dprintf("L%s: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

}
void *add_node(stack_t **stack, int n)
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
void _pall(stack_t **stack,__attribute__((unused))unsigned int line_number)
{
	stack_t *head;
	
	if (*stack)
	{
		head = *stack;
		while (head->next)
		{
			printf("%d\n", head->n);
			head = head->next;
		}
		if (head)
		{
			printf("%d\n", head->n);
		}
	}
}
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !stack)
	{
		fprintf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->n);
}
