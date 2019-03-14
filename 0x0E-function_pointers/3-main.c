#include "function_pointers.h"
#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate operations
 *
 * @argc: number of arguments
 * @argv: array with arguments
 *
 * Return: 98,99,100 if fails, 0 it's ok
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1, num2, result;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (get_op_func(argv[2]) != NULL)
		{
			result = get_op_func(argv[2])(num1, num2);
			printf("%d\n", result);
			return (0);
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
