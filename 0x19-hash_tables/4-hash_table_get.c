#include "hash_tables.h"

/**
 * hash_table_get - get the values of the hash table
 *
 * @ht: hash table
 * @key: key to search
 *
 * Return: return the value of the key, or NULL if not found
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux;

	if (key == NULL || key == '\0' || ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
