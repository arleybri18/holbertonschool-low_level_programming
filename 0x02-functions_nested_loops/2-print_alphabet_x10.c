#include "holberton.h"

/**
 * print_alphabet_x10 - writes the alphabeth to stdout 1o times
 * c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		i++;
	}
}
