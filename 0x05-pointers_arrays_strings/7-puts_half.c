#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: the string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int str_len, i;

	str_len = 0;
	while (*(str + str_len) != '\0')
	{
		str_len++;
	}

	if (str_len % 2 == 0)
	{
		for (int x = str_len/2; x < str_len; x++)
		{
			putchar(*(str + x));
		}
	}
	else
	{
		for (int x = str_len/2 + 1; x < str_len; x++)
		{
			putchar(*(str + x));
		}
	}
}
