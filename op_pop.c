#include "monty.h"
/**
 * op_pop - Remove the element.
 * @stack: The stack.
 * @line_number: line number.
*/
void op_pop(stack_t **stack, unsigned int line_number)
{

	stack_t *next;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	next = (*stack)->next;
	free(*stack);
	*stack = next;

}
