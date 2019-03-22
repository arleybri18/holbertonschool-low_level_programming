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
	/* 1- create a new node and the last pointer*/
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
	/* 1-  allocate new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/* 2- insert data in a new node*/
	new->str = new_str;
	new->len = lenght;
	/* 3 - this node is going to be a last node*/
	new->next = NULL;
	/* 4 - If the Linked List is empty, then make the new node as head*/
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	/* 5 - Else traverse till the last node*/
	while (last->next != NULL)
		last = last->next;
	/* 6 - Change the next of last node*/
	last->next = new;
	return (*head);


}
