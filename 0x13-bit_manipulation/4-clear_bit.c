#include "holberton.h"

/**
 * clear_bit - clear a bit at index
 *
 * @n: number to clear
 * @index: index to change
 * Return: 1 if success -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*declare a mask*/
	unsigned int mask;

	/*validate if n have a value or index not greather*/
	if (n == NULL || (index > (sizeof(*n) * 8)))
		return (-1);
	/*set the mask to 1*/
	mask = 1;
	/*move 1 in mask to index*/
	mask = mask << index;
	/* n and to neg mask, this clear the bit at index */
	*n = *n & ~mask;
	/*return successfull*/
	return (1);
}
