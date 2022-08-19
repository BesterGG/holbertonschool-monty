#include "monty.h"
/**
 * _swap - opcode that swaps the top two elements of the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int new_node = 0;

	head = *stack;
	while (head->next)
	{
	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_node = head->n;
	head->n = head->next->n;
	head->next->n = new_node;
}
/**
 * _add - opcode that adds the first two elements of the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int new_stack = 0, sum = 0;

	while (head->next)
	{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	}
	new_stack = head->n + head->next->n;
	head = head->next;
	_pop(stack, line_number);
	head->n = new_stack;
}
/**
 * _nop - opcode that doesn’t do anything.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void)stack, (void)line_number;
}
