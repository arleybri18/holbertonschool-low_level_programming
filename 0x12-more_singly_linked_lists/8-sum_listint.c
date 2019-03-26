#include "lists.h"

/**
 * sum_listint - function that sum the data in the list
 *
 * @head: head of the list
 * Return: sum of the data in elements
 */
int sum_listint(listint_t *head)
{
	int sum;
	/*validate if list is empty*/
	if (head == NULL)
		return (0);
	/*iterate on list*/
	sum = 0;
	while (head)
	{
		/*sum elements*/
		sum = sum + head->n;
		/*move the next node*/
		head = head->next;
	}
	return (sum);

}
