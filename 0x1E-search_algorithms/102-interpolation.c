#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array
 * using interpolation search
 * @array: The array
 * @size: the size of the array
 * @value: the value search
 * Return: First index of value, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	while ((array[high] != array[low]) && (value >= array[low])
	&& (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] -
		array[low])) * (value - array[low]));
		printf("Value checked array [%ld]", pos);
		if (pos >= size)
		{
			printf(" is out of range");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}

	if (array[low] == value)
		return (low);
	else
		return (-1);
}
