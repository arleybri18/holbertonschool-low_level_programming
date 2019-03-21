#include "lists.h"

/**
 * print_list - print contain values of the list
 *
 * @h: node of the list
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t n;

	/*iterate in struct*/
	while (h != NULL)
	{
		/*validate if string is null*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		/*counter number nodes*/
		n++;
	}
	return (n);
}
