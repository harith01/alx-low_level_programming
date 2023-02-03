#include "main.h"

/**
 * get_bit - Gets the value of a bit
 * @n: the bit
 * @index: the index
 * Return: Value of the bit at index, or -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
