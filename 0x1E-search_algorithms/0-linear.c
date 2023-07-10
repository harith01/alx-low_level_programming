#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - Searches for a value in an array
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to be searched
 * Return: First index where value is located or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
