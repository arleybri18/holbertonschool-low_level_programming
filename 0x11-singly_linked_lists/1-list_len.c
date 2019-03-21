#include "lists.h"

/**
 * list_len - calculate lenght of the list
 *
 * @h: list for iterate
 *
 * Return: value of lenght
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	/* validate if exist elements*/
	if (h != NULL)
	{
		/* condition of out recursion, until last node*/
		if (h->next == NULL)
			/*return value of n = 1, exist 1 element*/
			return (n + 1);
		/* increment n*/
		n++;
		/* call the recursion and add value of n*/
		return (n + list_len(h->next));
	}
	/*return 0 if not exist elements*/
	return (n);

}
