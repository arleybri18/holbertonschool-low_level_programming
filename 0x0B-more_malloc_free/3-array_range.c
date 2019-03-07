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
	int i,acum;
	/* Validate lenght of array*/
	if (min > max)
		return (NULL);

	/* allocate space char array*/
	arr = malloc(sizeof(int) * ((max - min) + 1));
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	acum = min;
	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = acum;
		acum++;
	}
	return (arr);
}
