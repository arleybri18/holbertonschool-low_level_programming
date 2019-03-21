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
	int n = 0;

	/*iterate in struct*/
	while (h != NULL)
	{
		/*validate if string is null*/
		if (h->str == NULL)
			printf("[0] %p\n", h->str);
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		/*counter number nodes*/
		n++;
	}
	return (n);
}
