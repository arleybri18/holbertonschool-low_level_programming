#include "lists.h"

/**
 * free_listint2 - function that free a linked list and set head to null
 *
 * @head: head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/*1- declare a pointer to point to the current node*/
	listint_t *current_node = *head;
	/*2- declare an auxiliar for the next node*/
	listint_t *next_node;

	if (head == NULL)
		return;

	while (current_node != NULL)
	{
		/*save the point to the next node*/
		next_node = current_node->next;
		/*delete the current node*/
		free(current_node);
		/*save the current node*/
		current_node = next_node;
	}
	/*point head to NULL*/
	*head = NULL;
}
