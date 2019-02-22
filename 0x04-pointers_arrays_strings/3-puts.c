#include "holberton.h"

/**
 * _puts - print the contain of string recorring an array
 * until the position len
 * @str: receive the string
 *
 */

void _puts(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar(10);
}
