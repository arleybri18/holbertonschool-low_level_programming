#include "lists.h"

/**
 * free_list - free list
 *
 * @head: head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	/* declare a current node*/
	list_t *current_node = head;
	/* declare auxiliar for the next node*/
	list_t *next_node;

	while (current_node != NULL)
	{
		/* save next node */
		next_node = current_node->next;
		/* free memory */
		free(current_node->str);
		free(current_node);
		/* save current_node */
		current_node = next_node;
	}
	/* dereferenced head*/
	head = NULL;
}
