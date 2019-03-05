#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate a string with dynamic array
 *
 * @str: string
 *
 * Return: NULL if a size or malloc fail, or copy array it's ok.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *arr;
	/**
	 * using malloc for allocated memory
	 * malloc return an address to pointer
	 */

	printf("s1 %lu s2 es %lu", sizeof(*s1), sizeof(*s2));
	arr = malloc(sizeof(*s1) + sizeof(*s2));
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];
	j = i;
	printf("i esta en %d y j esta en %d", i, j);
	for (i = 0; s2[i] != '\0'; i++)
		arr[j] = s2[i];

	arr[j] = '\0';
	return (arr);
	free(arr);
}
