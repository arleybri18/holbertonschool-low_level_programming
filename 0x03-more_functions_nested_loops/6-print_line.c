#include "holberton.h"

/**
 * print_line - writes the lines repeated n times
 * @n: The character to print
 *
 * Return: On success 0.
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
