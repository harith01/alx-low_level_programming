#include "main.h"

/**
 * _isupper - check if an entry is upper case
 * @c: entry to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
