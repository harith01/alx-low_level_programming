#include "main.h"

/**
 * print_line - print a line using dashes
 * @n: number of dash to print
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for(i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
