#include "holberton.h"

/**
 * print_number - convert string to capitalize
 * @n: receive the string
 *
 * Return: return de string converted
 */

void print_number(int n)
{
	if (n >= 10)
		_putchar((n / 10) + '0');

	_putchar((n % 10) + '0');
}
