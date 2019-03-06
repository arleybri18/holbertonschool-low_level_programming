#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlenght - calculate a length of a string
 *
 * @s: string
 *
 * Return: size of string
 */

unsigned int _strlenght(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concat a two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL if a size or malloc fail, or copy array it's ok.
 */

char *str_concat(char *s1, char *s2)
{
	int cont;
	int acum;
	char *arr;
	unsigned int size_s1, size_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_s1 = _strlenght(s1);
	size_s2 = 1 + _strlenght(s2);

	/**
	 * using malloc for allocated memory
	 * malloc return an address to pointer
	 */

	arr = malloc(size_s1 + size_s2);
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	/* Iterate first array*/
	for (cont = 0; s1[cont] != '\0'; cont++)
		arr[cont] = s1[cont];
	/* acumulate counter and iterate second array*/
	acum = cont;
	for (cont = 0; s2[cont] != '\0'; cont++)
		arr[acum + cont] = s2[cont];

	arr[acum + cont] = '\0';
	return (arr);
	free(arr);
}
