#include <stdio.h>
#include <stdlib.h>

/**
 * main - print error if argc or argv not allowed
 *
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0, or error it's fail
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
