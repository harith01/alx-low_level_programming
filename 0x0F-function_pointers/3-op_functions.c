#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the two ints
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtract an integr from another
 * @a: first integer
 * @b: second integer
 * Return: difference of the two ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: the first int
 * @b: the second int
 * Return: product of the two ints
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide an integr by another
 * @a: the dividend
 * @b: the divisor
 * Return: the quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - get the modulu
 * @a: the dividend
 * @b: the divisor
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
