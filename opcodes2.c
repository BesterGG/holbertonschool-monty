#include "monty.h"
/**
 * _swap - opcode that swaps the top two elements of the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int a = 0, value;

	while (head->next)
		a++;
	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = value;
}
/**
 * _add - opcode that adds the first two elements of the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	int ad = 0, sum = 0;

	while (head->next)
		ad++;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = head->n + head->next->n;
	head = head->next;
	_pop(stack, line_number);
	head->n = sum;
}
/**
 * _nop - opcode that doesn’t do anything.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void) stack, (void) line_number;
}
