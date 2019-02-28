#include "holberton.h"

/**
 * is_prime_number2 - calculate prime number
 * @n: value of compare
 * @i: increment
 *
 * Return: Return value 0 else 1 it's prime or call new
 */

int is_prime_number2(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		else
			return (is_prime_number2(n, ++i));
	}
	return (1);
}

/**
 * is_prime_number - calculate prime number
 * @n: value of compare
 *
 * Return: Return value 0 else 1 it's prime or call new
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_number2(n, 2));

}

