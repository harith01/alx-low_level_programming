#include "main.h"

/**
 * reverse_array - Function that  Reverses an array
 * @a: the array
 * @n: number of elements in the array
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
