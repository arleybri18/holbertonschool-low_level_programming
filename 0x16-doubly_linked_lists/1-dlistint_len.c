#include "lists.h"

/**
 *dlistint_len - number of elements in a list
 *
 *@h: head of the list
 *Return: i number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
