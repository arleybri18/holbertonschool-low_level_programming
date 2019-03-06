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

	if (grid == NULL || height == 0)
		free(grid);
	for (i = 0; i <= height; i++)
		free(grid[i]);
	free(grid);
}
