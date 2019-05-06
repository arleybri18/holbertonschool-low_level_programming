#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - calculates the length of the initial segment of s which consists
 * entirely of characters in accept
 * @s: This is the C string to be scanned
 * @accept: This is the string containing the list of characters to match in s
 *
 * Return: This function returns the number of characters in the initial
 * segment of s which consist only of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;
	unsigned int aux;
	/*Iterate first array*/
	i = 0;
	count = 0;
	aux = 0;
	while (s[i] != '\0')
	{
		j = 0;
		/*iterate string to compare letter a letter*/
		while (accept[j] != '\0')
		{
			/* if the positions are equals count augmmented*/
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		/*validate if count variable count change, else return count*/
		if (aux != count)
		{
			aux = count;
		}
		else
		{
			return (count);
		}

	i++;
	}
	/*Return null if not find the character*/
	return (count);
}
