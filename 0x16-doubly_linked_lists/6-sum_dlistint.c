#include "lists.h"

/**
 *sum_dlistint - sum data in a list
 *
 *@head: head of the list
 *Return: sum data of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
