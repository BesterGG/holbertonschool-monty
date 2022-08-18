#include "monty.h"
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int new_node = 0;

	head = *stack;
	if (head == NULL || head->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_node = head->n;
	head->n = head->next->n;
	head->next->n = new_node;
}
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int new_stack = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_stack = head->n + head->next->n;
	head->n = new_stack;
}
void _nop(stack_t **stack, unsigned int line_number)
{
	line_number = line_number;
	stack = stack;
}
