 #include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 *
 * Description: This program print the numbers that prints all possible
 * different combinations of two digits
 */
int main(void)
{
	int i;
	int j;
	int x;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (x = 48; x < 58; x++)
			{
				if (i < j && j < x)
				{
					putchar(i);
					putchar(j);
					putchar(x);
					if (x != 57 || j != 56 || i != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
