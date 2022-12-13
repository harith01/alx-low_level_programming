#include "main.h"

/**
 * _abs - compute absolute value of an integer
 * @n: the integer
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
