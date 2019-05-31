#include "hash_tables.h"
/**
 * key_index - function that return the index for the hash table
 *
 * @key: key value to hash function
 * @size: size of the array in the hash table
 *
 * Return: return the index
 *
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key == NULL)
		return (1);

	idx = hash_djb2(key) % size;
	return (idx);
}
