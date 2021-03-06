#include "monty.h"

/**
 * mod - rest of the division.
 * @head: double pointer to head node.
 * @line: line number.
 */
void mod(stack_t **head, unsigned int line)
{
	int val1, val2;
	stack_t *tmp;

	if (count(head) < 2)
		print_error(line, "can't mod, stack too short");

	val1 = (*head)->n;
	val2 = (*head)->next->n;
	if (val1 == 0)
		print_error(line, "division by zero");
	(*head)->next->n = val2 % val1;
	(*head)->next->prev = NULL;
	tmp = (*head)->next;

	free(*head);
	*head = tmp;

}
