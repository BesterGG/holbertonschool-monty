#include "monty.h"
/**
 * _push - opcode that pushes an element to the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _push(stack_t **head, unsigned int line_number)
{
	stack_t *new;
	int value = 0;
	value = atoi(strtok(NULL, " "));
	new = malloc(sizeof(stack_t));

	if (!new)
	{
		/**dprintf(STDERROR, algo)*/
		exit(EXIT_FAILURE);
	}
	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
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
/**
 * _pall - prints all the values on the stack, starting from the top of the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	(void)line_number;
	head = *stack;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
/**
 * _pint - opcode that prints the value at the top of the stack, followed by a new line.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * _pop - opcode that removes the top element of the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;
	if (!(*stack) || !stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (head)
	{
		if (head && head->next == NULL)
		{
			*stack = head;
		}
		else
		{
			printf("%d\n", head->n);
			head = head->next;
		}
	}
	free(head);
}
