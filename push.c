#include "monty.h"
void push(stack_t **head, unsigned int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	printf("linea: %u\n", line_number);
}