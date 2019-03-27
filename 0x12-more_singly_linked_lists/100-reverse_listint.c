#include "lists.h"

/**
 * reverse_listint - fucntion that reverse list
 *
 * @head: head of the list to reverse
 * Return: head of the list reversed
 **/

listint_t *reverse_listint(listint_t **head)
{
	/*declare pointer to move in the list*/
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	while (*head != NULL)
	{
		/*save the next node*/
		next_node = (*head)->next;
		/* reverse - point the head to prev node*/
		(*head)->next = prev_node;
		/*move pointer one position*/
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}

