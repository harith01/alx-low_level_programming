#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: A pointer to the but
 * @index: The index
 * Return: 1, -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index)l

	return (1);
}
