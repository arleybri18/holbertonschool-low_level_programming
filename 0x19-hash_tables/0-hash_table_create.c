#include "hash_tables.h"
/**
 * hash_table_create - Create a new hash table
 * @size: size of array to point to linked list
 *
 * Return: address pointer a new hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	/*create a new hash table*/
	new_table = malloc(sizeof(hash_table_t *));
	if (new_table == NULL)
		return (NULL);

	/*set the values*/
	new_table->size = size;
	/*allocate space for array of pointers*/
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table->array);
		return (NULL);
	}
	return (new_table);
}
