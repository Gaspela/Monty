#include "monty.h"
/**
 * op_swap - Swap the top two elements of the stack.
 * @stack: The stack.
 * @line_number: Line number.
*/
void op_swap(stack_t **stack, unsigned int line_number)
{

int dta;

if (*stack && (*stack)->next != NULL)
{
dta = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = dta;
}
else
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
free_stack(stack);
exit(EXIT_FAILURE);
}
}
