#include "holberton.h"

/**
 * puts2 - print the contain of string reverse recorring an array
 * until the position len
 * @str: receive the string
 *
 */

void puts2(char *str)
{
	int i;
	int len;


	while (*(str + len) != '\0')
	{
		len++;
	}

	i = 0;
	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	i++;
	}
	_putchar(10);
}
