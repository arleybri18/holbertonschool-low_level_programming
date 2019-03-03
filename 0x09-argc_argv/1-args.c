#include <stdio.h>
#include <stdlib.h>

/**
 * main - return the first argument
 *
 * @argc: number of arguments
 * @argv: array of string with the list of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
