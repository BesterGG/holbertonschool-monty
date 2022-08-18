#include "monty.h"
/**
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
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
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
