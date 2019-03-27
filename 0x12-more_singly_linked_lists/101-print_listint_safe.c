#include "lists.h"

/**
 * print_listint - print the number of the list
 *
 * @h: head of the list
 * Return: the number of elements in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int counter;
	/* iterate using the head*/
	counter = 0;
	/* validate if the list have elements*/
	if (head == NULL)
		return (counter);
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		counter++;
	}
	return (counter);

}
