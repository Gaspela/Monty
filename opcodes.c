#include "monty.h"
/**
 * op_push - Push the new to the stack.
 * @stack: The stack.
 * @line_number: line number.
 * @vstack: Value stack.
*/
void op_push(stack_t **stack, unsigned int line_number, char *vstack)
{

stack_t *node = NULL;
int i;

if (vstack == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
for (i = 0; vstack[i]; i++)
{
if (vstack[0] == '-' && i == 0)
continue;
if (isdigit(vstack[i]) == 0)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
}
/*Node*/
node = malloc(sizeof(stack));
if (node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
node->n = atoi(vstack);
node->next = NULL;
node->prev = NULL;
if (*stack)
{
node->next = *stack;
(*stack)->prev = node;
}

*stack = node;
}

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
