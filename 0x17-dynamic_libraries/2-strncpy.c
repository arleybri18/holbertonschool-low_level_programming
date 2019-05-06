#include "holberton.h"

/**
 * _strncpy - print the contain of array until n numbers
 * @dest: pointer contain a string to return
 * @src: pointer contain a string received
 * @n: number of characters to copy
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
	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
