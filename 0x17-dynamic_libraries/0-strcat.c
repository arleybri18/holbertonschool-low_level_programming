#include "holberton.h"
/**
 * _strcat - concatenate arrays
 * @dest: array that receive the characters of array source
 * @src: array source
 *
 * Return: return value of len
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int i;

	while (*(src + len_dest) != '\0')
		len_dest++;

	/*Iterate arrays and insert values of src into dest after len_dest*/
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';

	return (dest);
}
