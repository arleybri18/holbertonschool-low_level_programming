#include <stdio.h>

/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
int fibonacci(int num1, int num2, int max)
{
	int sum;

	sum = num1 + num2;
	printf("%d, ",num1);
	printf("%d, ",num2);
	while(sum <= max)
	{
		printf("%d, ", sum);
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}

	return (0);
}

int main(void)
{
	int num1;
	int num2;
	int max;

	num1 = 0;
	num2 = 1;
	max = 98;
	fibonacci(num1, num2, max);
	return (0);
}
