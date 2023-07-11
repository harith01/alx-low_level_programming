#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Search a value in an ordered array using jump search algo
 * @array: The array
 * @size: The size of the array]
 * @value: The value to search
 * Return: First index of value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end = sqrt(size), i;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end = end + sqrt(size);
		if (end > size - 1)
			return (-1);

	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
