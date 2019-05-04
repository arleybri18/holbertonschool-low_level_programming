#include "lists.h"

/**
 *print_dlistint - print a number of elements in a list
 *
 *@h: head of the list
 *Return: i number of element
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
