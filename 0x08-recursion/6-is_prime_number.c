#include "main.h"

/**
 * check_prime - checks if a number is prime
 * @x: divisor
 * @y: number to be checked
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int x, int y)
{
	if (y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check_prime(x + 1, y));
}

/**
 * is_prime_number - check if n is prime
 * @n: the number
 * Return: 1 if prime, 0 otherwisw
 */

int is_prime_number(int n)
{
	if  (n == 2)
		return (1);
	else if (n <= 1)
		return (0);
	return (check_prime(2, n));
}
