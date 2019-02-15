#include "holberton.h"

/**
 * print_diagonal - writes the diagonal
 * @n: The number of iterations
 *
 * Return: On success 0.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j < (n - (n - i)))
				{
					_putchar(32);
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
