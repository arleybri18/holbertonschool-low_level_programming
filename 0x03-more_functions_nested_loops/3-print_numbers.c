#include "holberton.h"

/**
 * print_numbers - writes the numbers to stdout
 * c: The character to print
 *
 * Return: On success 1.
 */

void print_numbers(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
