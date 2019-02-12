#include "holberton.h"
#include <stdio.h>

/**
 * times_table - print table times
 *
 * Return: On success 0.
 */

void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j != 0)
			{
				printf(",");

				if ((i * j) < 10)
				{
					printf("  ");
				}
				else
				{
					printf(" ");
				}
			}
			printf("%d", (i * j));
			j++;

		}
		printf("\n");
		i++;
	}
}
