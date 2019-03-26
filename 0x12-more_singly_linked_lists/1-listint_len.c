#include "lists.h"

/**
 * listint_len - calculate the number of elements in the list
 *
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int len;

	/* validate if the list is empty*/
	if (h == NULL)
		return (0);
	/* iterate in the list*/
	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);

}
