#include "lists.h"

/**
 * delete_nodeint_at_index - delete node index
 *
 * @head: head of the list
 * @index: index for delete node
 * Return: successful 1, fail -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*declare pointers*/
	listint_t *current_node;
	listint_t *prev_node;
	unsigned int counter_idx;

	if (*head == NULL)
		return (-1);

	/*save point to the head*/
	current_node = *head;
	prev_node = *head;
	while (*head)
	{
		counter_idx++;
		*head = *head->next;
	}
	/**/



}
