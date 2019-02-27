#include "holberton.h"

/**
 * _pow_recursion - calculate pow a number
 * @x: value base
 * @y: value to power
 *
 * Return: Return multiplication
 */

int _pow_recursion(int x, int y)
{
	/*validate if y is lower than zero*/
	if (y < 0)
		return (-1);
	/*validate if y is equal zero*/
	if (y == 0)
		return (1);
	/*multiplicate recursively x */
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
