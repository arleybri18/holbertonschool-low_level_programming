#include "holberton.h"

/**
 * get_bit - get a bit at the index
 *
 * @n: number to convert to binary
 * @index: index to bit to return
 * Return:  bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> (index)) & 1);

}
