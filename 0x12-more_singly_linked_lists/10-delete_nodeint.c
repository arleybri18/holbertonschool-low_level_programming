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
	/*calculate lenght of the list*/
	while (current_node)
	{
		counter_idx++;
		current_node = current_node->next;
	}
	/*validate if teh index not exist in the list*/
	if (counter_idx < index)
		return (-1);
	/*return to the head*/
	current_node = *head;
	counter_idx = 0;

	if (index == 0)
	{
		*head = current_node->next;
		current_node->next = NULL;
		free(current_node);
		return (1);
	}
	/*iterate until index*/
	while (counter_idx < index)
	{
		current_node = current_node->next;
		if (counter_idx != 0)
			prev_node = prev_node->next;
		counter_idx++;
	}

	prev_node = current_node->next;
	current_node->next = NULL;
	free(current_node);
	return (1);
}
