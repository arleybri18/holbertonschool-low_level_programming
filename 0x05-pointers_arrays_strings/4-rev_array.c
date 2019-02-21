#include "holberton.h"

/**
 * rev_string - print the contain of string reverse recorring an array
 * until the position len
 * @s: receive the string
 *
 */

void reverse_array(int *a, int n)
{
	int auxiliar;
	int i;
	
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
