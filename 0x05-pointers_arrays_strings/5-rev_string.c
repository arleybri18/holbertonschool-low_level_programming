#include "holberton.h"

/**
 * rev_string - print the contain of string reverse recorring an array
 * until the position len
 * @s: receive the string
 *
 */

void rev_string(char *s)
{
	int auxiliar;
	int i;
	int j;

	j = 0;
	while (*(s + j) != '\0')
	{
		j++;
	}
	j--;
	i = 0;
	while (i < j)
	{
		auxiliar = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = auxiliar;
		j--;
		i++;
	}
}
