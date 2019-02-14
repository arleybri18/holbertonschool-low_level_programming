#include "holberton.h"

/**
 * _isdigit - return is a character c is a digit
 * @c: The character to print
 *
 * Return: On success 1.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
