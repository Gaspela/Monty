#include "monty.h"
/**
 * op_pall - Print the values the estack.
 * @stack: The stack
 * @line_number: line number
*/
void op_pall(stack_t **stack, unsigned int line_number)
{

stack_t *node = *stack;

(void)line_number;

while (node != NULL)
{
printf("%d\n", node->n);
node = node->next;
}
}
