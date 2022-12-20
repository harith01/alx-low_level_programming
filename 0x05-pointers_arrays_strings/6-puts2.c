#include "main.h"

/**
 * puts2 - prints characters by skippping one
 * @str: string to print
 * Return: Always 0.
 */

void puts2(char *str)
{
	int c = 0;
	int len;
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	len = i - 1;

	while (c < len)
	{
		_putchar(str[c]);
		c = c + 2;
	}
	_putchar(10);
}

