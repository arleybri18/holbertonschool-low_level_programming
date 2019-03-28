#include "holberton.h"

/**
 * print_binary - print a number in binary
 *
 * @n: number to convert
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	/* validate if n is greather than 1*/
	if (n > 1)
	{
		/*call the recursion*/
		print_binary(n >> 1);
		/*print a digit only when finished recursion*/
		_putchar((n & 1) + 48);
	}
	else
	{
		/*validate strict n equal to zero*/
		if (n == 0)
			_putchar('0');
		else
			/*only if n equal to 1*/
			_putchar((n & 1) + 48);
	}
}
