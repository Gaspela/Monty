#include "monty.h"
/**
 * op_sub - Subtracts the top element of the stack.
 * @stack: The stack.
 * @line_number: line number.
*/
void op_sub(stack_t **stack, unsigned int line_number)
{

stack_t *node = NULL;

if (*stack && (*stack)->next != NULL)
{
(*stack)->next->n -= (*stack)->n;
node = *stack;
*stack = (*stack)->next;
(*stack)->prev = NULL;
free(node);
}
else
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
free_stack(stack);
exit(EXIT_FAILURE);
}
}
