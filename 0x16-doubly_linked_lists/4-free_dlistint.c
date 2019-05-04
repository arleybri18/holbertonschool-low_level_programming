#include "lists.h"

/**
 *free_dlistint - free a list
 *
 *@head: head of the list
 *Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	head = NULL;
}
