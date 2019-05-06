#include "lists.h"

/**
 * create_nodeint - function that creates a node of a structure type
 *
 * @new: new node to create
 *
 * @n: integer data of the structure
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *create_nodeint(dlistint_t *new, int n)
{
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 *
 * @h: head element of a list
 *
 * @idx: index of the node to insert
 *
 * @n: integer element of the node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *ins, *aux;
	unsigned int i;

	new = create_nodeint(new, n);
	ins = *h;
	for (i = 0; i < idx; i++)
	{
		ins = ins->next;
		if (ins == NULL)
			return (NULL);
	}

	aux = ins->prev;
	ins->prev = new;
	aux->next = new;
	new->next = ins;
	new->prev = aux;
	return (new);
}
