#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the contain in 2D array
 * @a: Array 2D
 * @size: size of array
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int diag1 = 0;
	int diag2 = 0;

	/*Iterate rows array*/
	for (i = 0; i < size; i++)
	{
		/*Iterate columns of array*/
		for (j = 0; j < size; j++)
		{
			/*verify firts diagonal left to right*/
			if (i == j)
				diag1 = diag1 + *(a + (i * size + j));
			/*verify second diagonal rigth to left*/
			if (i + j == size - 1)
				diag2 = diag2 + *(a + (i * size + j));
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
