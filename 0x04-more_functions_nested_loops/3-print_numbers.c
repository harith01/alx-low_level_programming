#include "main.h"

/**
 * print_numbers - print from 0 to 9
 *
 * Return: 0123456789
 */

void print_numbers(void)
{
	char i = '0';

	while (i < '10')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
