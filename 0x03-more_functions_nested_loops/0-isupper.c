#include "holberton.h"

/**
 * _isupper - return is a character c is a lowercase
 * @c: The character to print
 *
 * Return: On success 1.
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
