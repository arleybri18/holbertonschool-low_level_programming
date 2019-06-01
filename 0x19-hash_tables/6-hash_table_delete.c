#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to hash table.
 *
 * Return: nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux1, *aux2;

	if (ht == NULL)
		return;
	/*iteratte over hash table*/
	for (i = 0; i < ht->size; i++)
	{
		aux1 = ht->array[i];
		while (aux1 != NULL)
		{
			/* save pointer and free memory*/
			aux2 = aux1;
			free(aux1->key);
			free(aux1->value);
			aux1 = aux1->next;
			free(aux2);
		}
	}
	free(ht->array);
	free(ht);
}
