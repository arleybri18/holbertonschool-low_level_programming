#include "holberton.h"

/**
 * flip_bits - return number bytes necessary to change n to m
 *
 * @n: firts number
 * @m: second number
 * Return: 1- success -1 fail
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
