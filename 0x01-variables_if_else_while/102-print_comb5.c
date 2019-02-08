 #include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: This program print the numbers 00 to 99 separated by comma
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (j != 57 || i != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return (0);
}
