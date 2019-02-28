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
	if (i == n)
		return (1);
	else if (n % i == 0 && i < n)
		return (0);
	else
		return (is_prime_number2(n, ++i));
}

/**
 * is_prime_number - calculate prime number
 * @n: value of compare
 *
 * Return: Return value 0 else 1 it's prime or call new
 */

int is_prime_number(int n)
{
	int i;

	i = 0;
	return (is_prime_number2(n, i));

}

