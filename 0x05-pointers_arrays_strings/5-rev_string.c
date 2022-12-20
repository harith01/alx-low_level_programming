#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len = len - 1;

	while (len > i)
	{
		swap_char(*(s + len), *(s + i));
		i++;
		len--;
	}
}

/**
 * swap_char - swap two characters
 * @a: first character
 * @b: second character
 * Return: Nothing
 */

void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
