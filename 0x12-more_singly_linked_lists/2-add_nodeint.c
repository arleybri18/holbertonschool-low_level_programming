#include "lists.h"

/**
 * add_nodeint - add node to the linked list
 *
 * @head: head to the list
 * @n: number to add
 * Return: a new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*1- create a pointer to the new node*/
	listint_t *new;
	/*allocate memory for the node*/
	new = malloc(sizeof(listint_t));
	/* validate allocation*/
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/*2- put data in the node*/
	new->n = n;
	/*3- make next of the new node as head*/
	new->next = *head;
	/*4- move the head to the new node*/
	*head = new;

	return (*head);

}
