#include "holberton.h"
#include <stdlib.h>


/**
 * _strlenght - calculate a length of a string
 *
 * @s: string
 *
 * Return: size of string
 */

int _strlenght(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * _strdup - duplicate a string with dynamic array
 *
 * @str: string
 *
 * Return: NULL if a size or malloc fail, or copy array it's ok.
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *arr;
	/* Validate lenght of array*/
	if (str[0] == '\0')
		return (NULL);
	size = 1 + _strlenght(str);
	if (size == 0)
		return (NULL);

	/* allocate space char array*/
	arr = malloc(size * sizeof(char));
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
	free(arr);
}
