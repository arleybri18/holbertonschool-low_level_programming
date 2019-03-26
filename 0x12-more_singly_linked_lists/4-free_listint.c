#include "lists.h"

/**
 * free_listint - function that free a linked list
 *
 * @head: head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	/*1- declare a pointer to point to the current node*/
	listint_t *current_node = head;
	/*2- delcare an auxiliar for the next_node*/
	listint_t *next_node;

	while (current_node != NULL)
	{
		/*save the point to the next node*/
		next_node = current_node->next;
		/*delete a current node*/
		free(current_node);
		/*save the current node*/
		current_node = next_node;
	}
}
