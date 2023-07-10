#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using
 * binary search
 * @array: The array
 * @size: The size of the array
 * @value: The value to be searched
 * Return: The first index of the value or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lb = 0, ub = size - 1, i;
	int m;

	if (array == NULL)
		return (-1);

	while (lb <= ub)
	{
		printf("Searching in array: ");
		for (i = lb; i <= ub; i++)
		{
			if (i == ub)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		m = ((lb + ub) / 2);
		m = (int)m;
		if (array[m] < value)
			lb = m + 1;
		else if (array[m] > value)
			ub = m - 1;
		else if (array[m] == value)
			return (m);
	}

	return (-1);

}
