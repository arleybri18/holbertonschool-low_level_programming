#include "lists.h"

/**
 *add_dnodeint_end - add node at the beginning of a list
 *
 *@head: head of the list
 *@n: data for the node at the list
 *Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *aux = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (*head);
	}

	while (aux->next != NULL)
		aux = aux->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = aux;
	aux->next = new_node;

	return (*head);
}
