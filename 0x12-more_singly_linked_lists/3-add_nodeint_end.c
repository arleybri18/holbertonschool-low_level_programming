#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of the list
 *
 * @head: head of the list
 * @n: number to assign to the new node
 * Return: address of head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*1- create a new and the auxiliar pointers*/
	listint_t *new;
	listint_t *aux;
	/*aux point to the head*/
	aux = *head;
	/* allocate memory for the new node*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	/*2- insert data in the new node*/
	new->n = n;
	/*3- be a new node like the last node*/
	new->next = NULL;
	/*4- if the linked list is empty, then make the new node as head*/
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	/*5- Else traverse until the last node*/
	while (aux->next != NULL)
		aux = aux->next;
	/*6- change the member next to point to new node*/
	aux->next = new;
	return (*head);
}
