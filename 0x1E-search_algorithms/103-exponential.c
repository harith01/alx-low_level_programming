#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _binary_search - Searches for a value in a sorted array using
 * binary search
 * @array: The array
 * @lb: The lower bound of the array
 * @ub: The upper bound of the array
 * @value: The value to be searched
 * Return: The first index of the value or -1 otherwise
 */
int _binary_search(int *array, size_t lb, size_t ub, int value)
{
	size_t i;
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
/**
 * exponential_search - Search for a value in a sorted array using
 * using exponential search algorithm
 * @array: The array
 * @size: The size of the array
 * @value: The value to search
 * Return: First index of value, -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, end;

	if (size == 0 || array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (bound >= size)
		end = size - 1;
	else
		end = bound;
	return (_binary_search(array, bound / 2, end, value));
}
