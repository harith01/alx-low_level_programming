#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar(10);
}
