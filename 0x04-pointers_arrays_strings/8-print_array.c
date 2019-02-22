#include <stdio.h>

/**
 * print_array - print the contain of array
 * until the position len
 * @a: receive the string
 * @n: lenght of array
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n <= 0)
		printf("\n");
	while (i < n)
	{
		i != (n - 1) ? printf("%d, ", *(a + i)) : printf("%d\n", *(a + i));
	i++;
	}
}
