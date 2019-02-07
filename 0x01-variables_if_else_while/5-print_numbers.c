 #include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: This program print the numbers 0 to 9
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
