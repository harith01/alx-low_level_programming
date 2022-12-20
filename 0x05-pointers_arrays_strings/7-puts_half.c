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
		int x;
		for (x = str_len/2; x <= str_len; x++)
		{
			_putchar(*(str + x));
		}
	}
	else
	{
		int x;
		for (x = str_len/2 + 1; x < str_len; x++)
		{
			_putchar(*(str + x));
		}
	}
}
