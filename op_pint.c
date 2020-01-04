#include "monty.h"
/**
 * op_pint - Print value top.
 * @stack: The stack.
 * @line_number: line number.
*/
void op_pint(stack_t **stack, unsigned int line_number)
{

int dta = 0;

if (!stack || !*stack)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
dta = (*stack)->n;
printf("%d\n", dta);

}
