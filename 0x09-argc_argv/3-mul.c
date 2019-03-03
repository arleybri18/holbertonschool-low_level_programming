#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of arguments
 *
 * @argc: number of arguments
 * @argv: array of string with the list of arguments
 *
 * Return: 0 if is susscessfully or 1 it is not.
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
