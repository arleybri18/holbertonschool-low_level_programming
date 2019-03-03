#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the arguments passed
 *
 * @argc: number of arguments
 * @argv: array of string with the list of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 1)
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
	}

	return (0);
}
