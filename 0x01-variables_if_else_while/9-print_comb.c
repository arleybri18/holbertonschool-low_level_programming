 #include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: This program print the numbers 0 to 9 separated by comma
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
