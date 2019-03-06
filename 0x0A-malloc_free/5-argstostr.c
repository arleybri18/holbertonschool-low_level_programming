#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * len - calculate a length of a string
 * @s: string
 *
 * Return: size of string
 */

int len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - read arguments
 *
 * @ac: arguments count
 * @av: array of arguments
 *
 * Return: return the array with arguments
 */

char *argstostr(int ac, char **av)
{
	int col;
	int row;
	int **arr;

	/* validate parameters*/
	if (ac == 0 || !av)
		return (NULL);
	/**
	 * using malloc for allocated memory
	 * malloc return an address to pointer
	 * sizeof(int *) return size of a pointer int
	 */

	arr = malloc(sizeof(int *) * ac);
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	/* Iterate rows of the array*/
	for (row = 0; row < ac; row++)
	{
		/* allocate memory of the columns*/
		arr[row] = malloc(1 + len(&arr[row]));
		/*validate return function malloc*/
		if (arr[row] == NULL)
			return (NULL);
		/* Iterate columns of the array*/
		for (col = 0; av[row][col] != '\0'; col++)
		{
			/* asigne value rows and columns*/
			arr[row][col] = av[row][col];
		}
		arr[row][col] = '\n';
	}
	return (arr);
	free(arr);
}
