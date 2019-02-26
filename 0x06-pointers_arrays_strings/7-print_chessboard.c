#include "holberton.h"

/**
 * print_chessboard - print the contain in 2D array
 * @a: Array 2D
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	/*Iterate rows array*/
	i = 0;
	while (i < 8)
	{
		j = 0;
		/*iterate columns of array*/
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar(10);
	i++;
	}
}
