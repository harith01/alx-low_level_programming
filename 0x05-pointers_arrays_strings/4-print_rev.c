#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*s(s + i));
		i--;
	}
	_putchar(10);
}
