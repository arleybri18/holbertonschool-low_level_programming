#include "lists.h"

/**
 * len_list - calculate a lenght of the list
 *
 * @head:  head of the list
 * Return: lenght of the list
 */
unsigned int len_list(listint_t **head)
{
	listint_t *aux_node = *head;
	unsigned int counter_idx;

	counter_idx = 0;
	/* validate a lenght of the list*/
	while (aux_node)
	{
		counter_idx++;
		aux_node = aux_node->next;
	}
	return (counter_idx);
}

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
	listint_t *delete_node;
	unsigned int counter_idx;

	if (*head == NULL)
		return (-1);

	/*save point to the head*/
	current_node = *head;
	delete_node = *head;
	/*calculate lenght of the list*/
	counter_idx = len_list(head);
	/*validate if teh index not exist in the list*/
	if (counter_idx < index)
		return (-1);
	/*return to the head*/
	current_node = *head;
	counter_idx = 0;

	if (index == 0)
	{
		current_node = current_node->next;
		free(*head);
		*head = current_node;
		return (1);
	}
	/*iterate until index*/
	while (counter_idx != index && delete_node != NULL)
	{
		current_node = delete_node;
		delete_node = delete_node->next;
		counter_idx++;
	}

	current_node->next = delete_node->next;
	delete_node->next = NULL;
	free(delete_node);
	return (1);
}
