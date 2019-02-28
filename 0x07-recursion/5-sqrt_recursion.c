#include "holberton.h"

/**
 * _sqrt_recursion2 - calculate sqrt using recursively i * i
 * @n: value of a compare
 * @i: increment
 *
 * Return: Return value of i
 */

int _sqrt_recursion2(int n, int i)
{
	if (i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (_sqrt_recursion2(n, ++i));
	}
	else
	{
		return (-1);
	}

}

/**
 * _sqrt_recursion - calculate sqrt receive the parameter
 * @n: value of a calculate sqrt
 *
 * Return: Return value of sqrt
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	return (_sqrt_recursion2(n, i));
}

