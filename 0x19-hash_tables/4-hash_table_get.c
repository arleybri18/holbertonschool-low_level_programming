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

	index = key_index((unsigned char *)key, ht->size);
	if (key == NULL || key == '\0' || ht == NULL || ht->array[index] == NULL)
		return (NULL);
	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(aux->key, strdup(key)) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
