#include "main.h"

/**
 * _isalpha - check if an argument is an alphabet
 * @c: parameter being checked
 * Return: 1 if c is a letter, 0 otherwisw
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
