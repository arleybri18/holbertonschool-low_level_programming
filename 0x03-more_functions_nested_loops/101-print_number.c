#include "holberton.h"

/**
 * print_triangle - writes the triangle with character #
 * @size: The side size
 *
 * Return: On success 0.
 */

void print_number(int n)
{
	int digit;

	while (n > 0)
	{
		digit = n % 10;
		n = n / 10;
		_putchar(digit + 48);

	}



}
