#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the add of arguments
 *
 * @argc: number of arguments
 * @argv: array of string with the list of arguments
 *
 * Return: 0 if is susscessfully or 1 it is not.
 */

int main(int argc, char *argv[])
{
	int pos_array;
	int num_str;
	int sum = 0;

	if (argc > 1)
	{
		for (pos_array = 1; pos_array < argc; pos_array++)
		{
			for (num_str = 0; argv[pos_array][num_str] != 0; num_str++)
			{
				if (isdigit(argv[pos_array][num_str]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[pos_array]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
