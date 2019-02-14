#include "holberton.h"

/**
 * more_numbers - writes the numbers 10 times to stdout
 * c: The character to print
 *
 * Return: On success 1.
 */

void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 0;
		while (c <= 14)
		{
			if (c < 10)
			{
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			c++;
		}
		_putchar(10);
	}
}
