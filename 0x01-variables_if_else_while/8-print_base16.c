 #include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: This program print the numbers hexadecimal, see ASCII table
 * putchar always print the character code.
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i= 97;
	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
