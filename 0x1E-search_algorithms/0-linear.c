#include "search_algos.h"

/**
 * linear_search - Fucntion that search a value using
 * Linear Search algorithm
 *
 * @array: Array with values to compare
 * @size: Size of array
 * @value: value to search
 *
 * Return: index when is founded, -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);
	while (idx < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[(int)idx]);
		if (array[idx] == value)
			return ((int)idx);
		idx++;
	}
	return (-1);
}
