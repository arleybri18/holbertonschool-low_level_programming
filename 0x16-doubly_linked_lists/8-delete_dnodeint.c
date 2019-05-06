#include "lists.h"
/**
 * len_list - calculate a lenght of the list
 *
 * @head: head of the list
 * Return: lenght of the list
 */
unsigned int len_list(dlistint_t **head)
{
	dlistint_t *aux_node = *head;
	unsigned int counter_idx;

	counter_idx = 0;
	/*validate lenght of the list*/
	while (aux_node)
	{
		counter_idx++;
		aux_node = aux_node->next;
	}
	return (counter_idx);
}

/**
 *get_dnodeint_at_index -  get a node at index
 *
 *@head: head of the list
 *@index: index to node to return
 *Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (aux->next != NULL && count < index)
	{
		aux = aux->next;
		count++;
	}
	if (count == index)
		return (aux);
	return (NULL);
}

/**
 *delete_dnodeint_at_index -  delete a node at index
 *
 *@head: head of the list
 *@index: index to node to return
 *Return: 1 if it's success and -1 it's fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL)
		return (-1);
	count = len_list(head);
	if (count > 0)
	{
		count = count - 1;
		current = get_dnodeint_at_index(*head, index);
	}
	else
		return (-1);
	if (index == 0 && count > 0)
	{
		*head = current->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	if (index == 0 && count == 0)
	{
		free(current);
		*head = NULL;
		return (1);
	}
	if (index < count)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
	if (index == count)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
