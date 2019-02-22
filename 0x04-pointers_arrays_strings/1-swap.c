#include "holberton.h"

/**
 * swap_int - swaps two numbers
 * @a: The variable to swap
 * @b: the variable to swap
 *
 */

void swap_int(int *a, int *b)
{	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
