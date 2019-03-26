#include "lists.h"

/**
 * pop_listint - fucntion that delete a first element
 *
 * @head: head of the list
 * Return: the number of the node deleted
 */
int pop_listint(listint_t **head)
{
	int number_data = 0;
	/*create a auxiliar node*/
	listint_t *aux;
	/*validate if the list is empty*/
	if (head == NULL)
		return (number_data);


	/*aux point to the head*/
	aux = *head;
	/*save the data*/
	number_data = aux->n;
	/*point to the next element*/
	aux = aux->next;
	/*deleted firts element*/
	free(*head);
	/*head point to the new firts element*/
	*head = aux;
	/* return data saved*/
	return (number_data);
}
