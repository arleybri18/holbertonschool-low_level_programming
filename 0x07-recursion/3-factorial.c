#include "holberton.h"

/**
 * factorial - calculate factorial a number
 * @n: receive the number for calculate array
 *
 * Return: Return factorial
 */

int factorial(int n)
{
	/*validate conditions*/
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
