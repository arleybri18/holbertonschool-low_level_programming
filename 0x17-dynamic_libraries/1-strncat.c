#include "holberton.h"

/**
 * _strncat - concatenate n characters of an array
 * @dest: array that receive the characters of array source
 * @src: array source
 * @n: numbers of characters to concat
 *
 * Return: return value of dest variable
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int i;

	while (*(src + len_dest) != '\0')
		len_dest++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';

	return (dest);
}
