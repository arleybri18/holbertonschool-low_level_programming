#include "lists.h"
#include <string.h>
/**
 * add_node - add node to linked list
 *
 * @head: pointer to head
 * @str: string with name
 *
 * Return: address of direction  head
 */
list_t *add_node(list_t **head, const char *str)
{
	/*1 - create a new node*/
	list_t *new;
	char *new_str;
	int lenght = 0;
	/*duplicate a string*/
	new_str = strdup(str);
	/* validate if string is null */
	if (new_str == NULL)
		return (NULL);
	/*calculate lenght of a string*/
	while (new_str[lenght] != '\0')
		lenght++;

	/* 1 - create a new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/* 2 - put in the data */
	new->str = new_str;
	new->len = lenght;
	/* 3 - make next of new node as head*/
	new->next = *head;
	/* 4 - move the head to point to new node*/
	*head = new;

	return (*head);


}
