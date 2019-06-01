#include "hash_tables.h"
/**
 * hash_table_set - create a linked list node in the hash table
 *
 * @ht: hash table
 * @key: string key to set
 * @value: string value to set
 *
 * Return: 1 if sucess 0 if fails
 *
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *aux;
	char *key_dup, *value_dup;

	if (key == NULL || key == '\0' || ht == NULL || value == NULL)
		return (0);
	key_dup = strdup(key);
	value_dup = strdup(value);
	idx = key_index((unsigned char *)key_dup, ht->size);
	if (ht->array[idx] != NULL)
	{
		aux = ht->array[idx];
		while (aux)
		{
			if (strcmp(aux->key, key_dup) == 0)
			{
				aux->value = value_dup;
				return (1);
			}
			aux = aux->next;
		}
	}
	/* allocate node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_dup;
	new_node->value = value_dup;
	/* add first node*/
	if (ht->array[idx] == NULL)
	{
		new_node->next = NULL;
		ht->array[idx] = new_node;
		return (1);
	}
	/* add node at the beginning of the list */
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
