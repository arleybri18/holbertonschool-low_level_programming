#include "holberton.h"

/**
 * puts_half - print the half of a string
 * until the position len
 * @str: receive the string
 *
 */

void puts_half(char *str)
{
	int i;
	int len;


	while (*(str + len) != '\0')
	{
		len++;
	}

	i = len / 2;
	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
