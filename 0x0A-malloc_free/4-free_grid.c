#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - create a two dimensional array
 *
 * @grid: grid to free
 * @height: heigth of the array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	/* validate if grid is null, free memory*/
	if (grid == NULL)
		free(grid);
	/*Iterate array and free memory*/
	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
