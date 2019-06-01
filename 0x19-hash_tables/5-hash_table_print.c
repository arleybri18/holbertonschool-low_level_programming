#include "hash_tables.h"

/**
 * hash_table_print - print the keys and values in the hash table
 *
 * @ht: hash table
 *
 * Return: nothing, printed values
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int i;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux != NULL)
			{
				printf("%s'%s':'%s'", sep, aux->key, aux->value);
				sep = ", ";
				aux = aux->next;
			}
		}
	}
	printf("}\n");
}
