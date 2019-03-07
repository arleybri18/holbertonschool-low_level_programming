#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: number of members of array
 * @size: value of size of members the array
 *
 * Return: NULL if a size or malloc fail, or array it's ok.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;
	/* Validate lenght of array*/
	if (size == 0 || nmemb == 0)
		return (NULL);

	/* allocate space char array*/
	arr = malloc(size * nmemb);
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
