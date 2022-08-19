#include "monty.h"
/**
 * _push - opcode that pushes an element to the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	char *str = NULL;
void _push(stack_t **head, unsigned int line_number)
{
	stack_t *new;
	value = strtok(NULL, " ");
	new = malloc(sizeof(stack_t));

	str = strtok(NULL, "\t\n ");
	if (!str)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed");
	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	new->n = atoi(str);
	new->prev = NULL;
	if (*stack != NULL)
	{
		new->next = *stack;
		(*stack)->prev = new;
		*stack = new;
	}	
	else
	{
		new->next = NULL;
		*stack = new;
	}
}
/**
 * _pall - prints all the values on the stack, starting from the top of the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
<<<<<<< HEAD
	stack_t *head = *stack;

	(void)line_number;
	if (!head)
		return;
=======
	stack_t *head;
	value = strtok(NULL, " ");
	(void)line_number;
	head = *stack;

>>>>>>> main
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
	stack_t *head = *stack;

	if (!head)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
<<<<<<< HEAD
	printf("%d\n", head->n);
=======
	printf("%d\n", (*stack)->n);
>>>>>>> main
}
/**
 * _pop - opcode that removes the top element of the stack.
 * @stack: stack where all our elements will be.
 * @line_number: numbers within the stack.
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (!head)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
<<<<<<< HEAD
	*stack = head->next;
	if (head->next)
		head->next->prev = NULL;
=======
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
>>>>>>> main
	free(head);
}
