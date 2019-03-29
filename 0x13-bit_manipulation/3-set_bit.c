#include "holberton.h"

/**
 * set_bit - set a bit to 1 at index
 *
 * @n: number to change
 * @index: index to change
 * Return: 1 if success -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (n == NULL || (index > (sizeof(*n) * 8)))
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = *n | mask;
	return (1);


}
