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
 *insert_dnodeint_at_index - insert node at the index
 *
 *@h: head of the list
 *@idx: index in the list
 *@n: data for the node at the list
 *Return: address of the new element
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *aux = *h;
	unsigned int count;

	count = len_list(h);
	if (count < idx)
		return (NULL);
	if (idx == 0)
	{
		aux = add_dnodeint(h, n);
		return (aux);
	}
	if (idx == count)
	{
		aux = add_dnodeint_end(h, n);
		return (aux);
	}
	if (h == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	count = 0;
	for (count = 0; count < (idx - 1) && aux->next != NULL; count++)
		aux = aux->next;
	new_node->n = n;
	new_node->next = aux->next;
	new_node->prev = aux;
	aux->next = new_node;
	aux->next->prev = new_node;
	return (new_node);
}
