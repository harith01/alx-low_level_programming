#include "main.h"

/**
 * print_numbers - print from 0 to 9
 *
 * Return: 0123456789
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
