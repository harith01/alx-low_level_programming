#include "main.h"

/**
* _memset - fills memory with a constant
* @s: memory area
* @b: the constant
* @n: number of first bytes to be filled
* Return: Filled memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
