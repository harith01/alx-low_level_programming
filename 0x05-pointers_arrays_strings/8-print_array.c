#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: array
 * @n: number of elements to print
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));
	}
}
