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

	i = 0;
	len = sizeof(str);
	while (i <= len)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	i++;
	}
	_putchar(10);
}
