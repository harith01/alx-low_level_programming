#include "main.h"

/**
 * check_sqrt - find the square root of a number
 * @i: integer to check if i*i = x
 * @x: the square
 * Return: the correct value of i
 */

int check_sqrt(int i, int x)
{
	if (i * i == x)
		return (i);
	if (i * i > x)
		return (-1);
	return (check_sqrt(i + 1, x));
}

/**
 * _sqrt_recursion - returns the square root of number
 * @n: the number
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
