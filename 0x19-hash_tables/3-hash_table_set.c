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
	hash_node_t *new_node;

	if (key == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
