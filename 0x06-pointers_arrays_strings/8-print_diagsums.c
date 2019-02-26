#include "holberton.h"

/**
 * print_diagsums - print the contain in 2D array
 * @a: Array 2D
 * @size: descrip
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;

	/*Iterate rows array*/
	i = 0;
	while (i < size)
	{
		j = 0;
		/*iterate columns of array*/
		while (j < size)
		{
			if (i == j)
			{
				left = a[i][j];
			}
			j++;
		}
		_putchar(10);
	i++;
	}
}
