#include "holberton.h"
/**
 * _pow - calculate recursive pow
 *
 * @num: number base
 * @exp: exponent to calculate
 * Return: number pow to exponent
 */

int _pow(int num, int exp)
{
	/*validate if exp is equal to zero*/
	if (exp == 0)
		return (1);
	/*multiplicate recursively x */
	else
	{
		return (num * _pow(num, (exp - 1)));
	}

}
/**
 * binary_to_uint - calculate decimal
 *
 * @b: string with the number to convert
 * Return: decimal number in unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int integer, count, lenght, base;

	if (b == NULL)
		return (0);
	base = 2;
	lenght = 0;
	integer = 0;
	/*calculate lenght of string*/
	while (b[lenght] != '\0')
		lenght++;

	/*convert number */
	count = 0;
	while (b[count] != '\0')
	{
		if ((b[count] == '0') || (b[count] == '1'))
		{
			integer = integer + ((b[count] - 48) * _pow(base, (lenght - (count + 1))));
		}
		else
		{
			return (0);
		}
			count++;
	}
	return (integer);

}
