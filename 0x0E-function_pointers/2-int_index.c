#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array with numbers
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: integer with index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/*validate if function cmp return 0*/
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
