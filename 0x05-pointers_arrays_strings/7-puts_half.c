#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: the string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int str_len;

	str_len = 0;
	while (*(str + str_len) != '\0')
	{
		str_len++;
	}

	if (str_len % 2 == 0)
	{
		str_len = str_len / 2;
	}
	else
	{
		str_len = (str_len + 1) / 2;
	}

	while (*(str + str_len) != '\0')
	{
		_putchar(*(str + str_len));
		str_len++;
	}
	_putchar(10);
}
