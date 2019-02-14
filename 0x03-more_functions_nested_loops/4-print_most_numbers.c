#include "holberton.h"

/**
 * print_most_numbers - writes the numbers to stdout
 * without 2 and 4
 * c: The character to print
 *
 * Return: On success 1.
 */

void print_most_numbers(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		c++;
	}
	_putchar(10);
}
