#include <stdio.h>

/**
 * main - print FizzBuzz validate multiples 3 or 5,  number 1 to max (100).
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int max;

	max = 100;
	for (i = 1; i <= max; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			i != max ? printf("FizzBuzz ") : printf("FizzBuzz\n");
		}
		else if ((i % 3) == 0)
		{
			i != max ? printf("Fizz ") : printf("Fizz\n");
		}
		else if ((i % 5) == 0)
		{
			i != max ? printf("Buzz ") : printf("Buzz\n");
		}
		else
		{
			i != max ? printf("%d ", i) : printf("%d\n", i);
		}

	}
	return (0);
}

