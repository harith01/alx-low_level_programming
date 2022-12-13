#include "main.h"

/**
 * _islower - check if alphabet is lower case
 * Description: check is c is lowercase
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
