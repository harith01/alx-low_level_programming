#include"main.h"
#include<stdlib.h>

/**
* binary_to_uint - Convert binary to unsigned integer
* @b: string of 0s and 1s
* Return: binary equivalent of b
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;

	if (!b)
		return (0);

	decimal = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = decimal * 2 +  (*b - '0');
		b++;
	}
	return (decimal);
}

