#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: min number of range
 * @max: max number of range
 *
 * Return: NULL if a size or malloc fail, or array it's ok.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	/* Validate lenght of array*/
	if (min > max)
		return (NULL);

	/* allocate space char array*/
	arr = malloc((sizeof(int) * max) + 1);
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	return (arr);
}
