#include "lists.h"

/**
 * get_nodeint_at_index - return the data of the nth node
 *
 * @head: head of the list
 * @index: index of the find
 * Return: the node that have the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*declare an auxiliar pointer*/
	listint_t *aux;
	unsigned int count_index;
	/*pointer to the head*/
	aux = head;

	count_index = 0;
	/*iterate on the list*/
	while (count_index < index && aux->next != NULL)
	{
		aux = aux->next;
		count_index++;
	}

	/*validate if the counter is equal to teh index*/
	if (count_index == index)
		return (aux);
	return (NULL);


}
