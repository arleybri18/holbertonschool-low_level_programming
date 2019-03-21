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
	list_t *new;
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

	new->str = new_str;
	new->len = lenght;
	new->next = *head;

	*head = new;

	return (*head);


}
