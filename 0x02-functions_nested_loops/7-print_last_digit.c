#include "holberton.h"

/**
 * print_last_digit - returns de last digit of a number
 * @n: The character to print
 *
 * Return: On success 0.
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -1 * n;
		_putchar(n + '0');
		return (n);
	}

	_putchar(n + '0');
	return (n);

}
