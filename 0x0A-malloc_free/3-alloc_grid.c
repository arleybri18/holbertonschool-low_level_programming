#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create a two dimensional array
 *
 * @width: width the array
 * @height: heigth of the array
 *
 * Return: NULL if a size or malloc fail, or 2D array it's ok.
 */

int **alloc_grid(int width, int height)
{
	int col, row, **arr;

	/* validate if side is less or equal to zero*/
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	/* Iterate rows of the array*/
	for (row = 0; row < height; row++)
	{
		/* allocate memory of the columns*/
		arr[row] = malloc(sizeof(int) * width);
		/*validate return function malloc*/
		if (arr[row] == NULL)
		{	/* free memory*/
			for (; row >= 0; row--)
				free(arr[row]);
			free(arr);
			return (NULL);
		}
	}
	/* Iterate array rows*/
	for (row = 0; row < height; row++)
	{
		/* Iterate columns of the array*/
		for (col = 0; col < width; col++)
		{
			/* asigne value rows and columns*/
			arr[row][col] = 0;
		}
	}
	return (arr);
}
