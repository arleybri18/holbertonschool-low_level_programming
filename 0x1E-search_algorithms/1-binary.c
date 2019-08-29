#include "search_algos.h"

/**
 * binary_search - Function that search a value using
 * Binary Search algorithm
 *
 * @array: Array with values to compare
 * @size: Size of array
 * @value: value to search
 *
 * Return: index when is founded, -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	int idx = 0, m = 0, i = 0;
	int len = (int)size - 1;


	if (array == NULL)
		return (-1);
	/* iterate over array */
	while (idx <= len)
	{
		/* set pivot point*/
		m = (idx + len) / 2;
		/* printing subarray*/
		printf("Searching in array: ");
		for (i = idx; i <= len; i++)
		{
			if (i != len)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);

		}
		/* validate value in position is less than the value*/
		if (array[m] < value)
			/* increment index to right*/
			idx = m + 1;
		/* validate value in position is greather than the value*/
		else if (array[m] > value)
			/* decrement index to left*/
			len = m - 1;
		else
			return (m);
	}
	return (-1);
}
