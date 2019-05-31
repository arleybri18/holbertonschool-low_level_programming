#include "hash_tables.h"


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	
	(void)size;
	if(key == NULL)
		return (1);

	idx = hash_djb2(key) % size;
	return (idx);
}
