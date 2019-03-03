#include <stdio.h>
#include <stdlib.h>

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
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
