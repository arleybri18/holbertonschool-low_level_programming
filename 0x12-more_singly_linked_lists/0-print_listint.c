#include "lists.h"

/**
 * print_listint - print the number of the list
 *
 * @h: head of the list
 * Return: the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter;
	/* iterate using the head*/
	counter = 0;
	/* validate if the list have elements*/
	if (h == NULL)
		return (counter);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);

}
