#include "holberton.h"

/**
 * print_diagonal - writes the diagonal repeated n times
 * @n: The character to print
 *
 * Return: On success 0.
 */

void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar(92);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
