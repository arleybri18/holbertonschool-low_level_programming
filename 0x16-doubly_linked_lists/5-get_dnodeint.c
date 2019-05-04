#include "lists.h"

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

	while (aux->next != NULL && count < index)
	{
		aux = aux->next;
		count++;
	}
	if (count == index)
		return (aux);
	return (NULL);
}
