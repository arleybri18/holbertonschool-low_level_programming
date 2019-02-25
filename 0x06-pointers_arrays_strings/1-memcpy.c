#include "holberton.h"

/**
 * _memcpy - copies n characters from memory area dest to memory area str
 * @dest: This is pointer to the source of data to be copied
 * @src: This is pointer to the dest array where the content is to be copied
 * @n: This is the number of bytes to be copied
 *
 * Return: return array dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/*Iterate the array and insert value src[i] until value n*/
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
