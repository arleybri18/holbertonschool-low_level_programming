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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
