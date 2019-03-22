#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node to linked list
 *
 * @head: pointer to head
 * @str: string with name
 *
 * Return: address of direction  head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* create a new node and the last pointer*/
	list_t *new;
	list_t *last = *head;
	/* duplicate and validate string*/
	char *new_str;
	int lenght = 0;

	new_str = strdup(str);
	/* validate if string is null */
	if (new_str == NULL)
		return (NULL);
	/*calculate lenght of a string*/
	while (new_str[lenght] != '\0')
		lenght++;
	/* create a new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/* insert data in a new node*/
	new->str = new_str;
	new->len = lenght;
	new->next = NULL;
	/*If the Linked List is empty, then make the new node as head*/
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	/*Else traverse till the last node*/
	while (last->next != NULL)
		last = last->next;
	/*Change the next of last node*/
	last->next = new;
	return (*head);


}
