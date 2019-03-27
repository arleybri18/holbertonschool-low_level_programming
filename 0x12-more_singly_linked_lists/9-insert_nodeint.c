#include "lists.h"

/**
 * len_list - calculate a lenght of the list
 *
 * @head: head of the list
 * Return: lenght of the list
 */
unsigned int len_list(listint_t **head)
{
	listint_t *aux_node = *head;
	unsigned int counter_idx;

	counter_idx = 0;
	/*validate lenght of the list*/
	while (aux_node)
	{
		counter_idx++;
		aux_node = aux_node->next;
	}
	return (counter_idx);
}

/**
 * insert_nodeint_at_index - insert a new node
 *
 * @head: head of the list
 * @idx: index of the new element
 * @n: number data to the node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*declare pointer to new node and aux node*/
	listint_t *new_node, *aux_node;
	unsigned int counter_idx;

	if (*head == NULL)
		return (NULL);
	/*save point to head*/
	aux_node = *head;
	counter_idx = len_list(head);
	/*validate if the index not exist in the list*/
	if (counter_idx < idx)
		return (NULL);
	/*allocate memory for new_node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*insert data*/
	new_node->n = n;
	/*iterate before index*/
	counter_idx = 0;
	aux_node = *head;
	/*reorganize list if idx is equal to 0*/
	if (idx == 0)
	{
		new_node->next = aux_node;
		*head = new_node;
		return (new_node);
	}
	while (counter_idx < (idx - 1))
	{
		aux_node = aux_node->next;
		counter_idx++;
	}
	/*change pointers*/
	new_node->next = aux_node->next;
	aux_node->next = new_node;
	return (new_node);
}
