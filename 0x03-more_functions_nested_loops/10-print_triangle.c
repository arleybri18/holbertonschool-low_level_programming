#include "holberton.h"

/**
 * print_triangle - writes the triangle with character #
 * @size: The side size
 *
 * Return: On success 0.
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= (size - i))
				{
					_putchar(32);
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
