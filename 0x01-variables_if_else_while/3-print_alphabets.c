 #include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: This print a alphabet in lowercase and uppercase
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
