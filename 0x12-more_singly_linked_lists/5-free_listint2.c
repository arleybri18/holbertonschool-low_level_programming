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
	listint_t *current_node;

	if (head == NULL)
		return;
	current_node = *head;

	while (*head != NULL)
	{
		/*save the point to the next node*/
		current_node = current_node->next;
		/*delete the head*/
		free(*head);
		/*save the current node*/
		*head = current_node;
	}
}
