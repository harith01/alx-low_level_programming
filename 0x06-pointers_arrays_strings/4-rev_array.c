#include "main.h"

/**
 * reverse_array - Function that  Reverses an array
 * @a: the array
 * @n: number of elements in the array
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		if (i != n - 1)
			printf(", ");
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
