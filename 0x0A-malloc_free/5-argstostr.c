#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * len - calculate a length of a 2D array
 * @s: string
 * @ac: lenght of array
 * Return: size of 2D array
 */

int len(char **s, int ac)
{
	int i, j, count;

	i = 0;
	count = 0;
	while (i < ac)
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			count++;
			j++;
		}
		count++;
		i++;
	}
	return (count);
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
	int col, row, lenght, position;
	char *arr;

	/* validate parameters*/
	if (ac == 0 || av == NULL)
		return (NULL);
	/**
	 * using malloc for allocated memory
	 * malloc return an address to pointer
	 * sizeof(int *) return size of a pointer int
	 */

	lenght = len(av, ac);
	arr = malloc(sizeof(char) * (lenght + 1));
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	/* Iterate rows of the array*/
	position = 0;
	for (row = 0; row < ac; row++)
	{
		/* Iterate columns of the array*/
		for (col = 0; av[row][col] != '\0'; col++)
		{
			/* asigne value rows and columns*/
			arr[position] = av[row][col];
			position++;
		}
		arr[position] = '\n';
		position++;
	}
	arr[position] = '\0';
	return (arr);
	free(arr);
}
