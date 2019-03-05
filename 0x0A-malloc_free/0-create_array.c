#include "holberton.h"
#include <stdlib.h>

/**
 * main - create an array with dynamic memory 
 *
 * @size: value of lenght of the array
 * @c: character for fill the array
 *
 * Return: NULL if a size or malloc fail, or array it's ok.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	/* Validate lenght of array*/ 
	if (size == 0)
		return NULL;

	/* allocate space char array*/
	arr = malloc(size * sizeof(char));
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
