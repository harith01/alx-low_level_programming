#include "main.h"

/**
 * print_diagonal - print diagonal lines
 * @n: number of lines
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int s;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
