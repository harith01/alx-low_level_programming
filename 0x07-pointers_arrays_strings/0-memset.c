#include "main.h"

/**
* _memset - fills memory with a constant
* @s: memory area
* @b: the constant
* @n: number of first bytes to be filled
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		*s = b;
		*s++;
		i++;
	}
}
