#include "holberton.h"

/**
 * reverse_array - reverse an array of length n
 * @a: receive the string
 * @n: length of the array
 *
 */

void reverse_array(int *a, int n)
{
	int auxiliar;
	int i;

	/*loop that iterate array and reverse using the auxiliar variable*/
	i = 0;
	while (i < n)
	{
		auxiliar = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = auxiliar;
		n--;
		i++;
	}
}
