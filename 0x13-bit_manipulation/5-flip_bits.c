#include "holberton.h"

/**
 * flip_bits -
 *
 * Return: 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int acum;
	unsigned int xor;
	
	xor = n ^ m;

	acum = 0;
	while (xor != 0)
	{
		acum = acum + (xor & 1);
		xor = xor >> 1;
	}
	return (acum);
}
