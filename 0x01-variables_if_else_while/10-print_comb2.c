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
	int j;

	for(i=48;i<58;i++)
	{
		for(j=48;j<58;j++)
		{
			putchar(i);
			putchar(j);
			if (j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
