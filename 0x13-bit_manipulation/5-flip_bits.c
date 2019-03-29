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
	/*declare auxiliar variables*/
	unsigned int acum;
	unsigned int xor;

	/*with xor have a number with bytes opposites*/
	xor = n ^ m;
	acum = 0;
	/*iterare xor value*/
	while (xor != 0)
	{
		/*sum byte to byte*/
		acum = acum + (xor & 1);
		/*move right 1 byte*/
		xor = xor >> 1;
	}
	return (acum);
}
