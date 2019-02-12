#include "holberton.h"

/**
 * _abs - returns absolute value of an integer
 * @n: The character to print
 *
 * Return: On success 0.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = -1 * n;
		return (n);
	}
}
