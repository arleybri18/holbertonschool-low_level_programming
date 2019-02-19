#include "holberton.h"

/**
 * print_rev - print the contain of string reverse recorring an array
 * until the position len
 * @s: receive the string
 *
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}
