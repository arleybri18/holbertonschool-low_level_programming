#include "holberton.h"
#include <stdlib.h>

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
	char *arr;
	/*allocate space char array*/
	arr = malloc(sizeof(*str));
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
	free(arr);
}
