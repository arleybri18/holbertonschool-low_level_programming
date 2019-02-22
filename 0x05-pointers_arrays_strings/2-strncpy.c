#include "holberton.h"

/**
 * _strcpy - print the contain of array
 * until the position len
 * @dest: pointer contain a string to return
 * @src: pointer contain a string received
 *
 * Return: return char string *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	i = 0;
	while (i < n && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	for (;i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
