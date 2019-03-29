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
	/*declare a mask*/
	unsigned int mask;

	/*validate if n have value or index not greather*/
	if (n == NULL || (index > (sizeof(*n) * 8)))
		return (-1);
	/*set the mask to 1*/
	mask = 1;
	/*move 1 in mask to index*/
	mask = mask << index;
	/*sum to n the mask, this set 1 at index given*/
	*n = *n | mask;
	/*return susscesfull*/
	return (1);


}
