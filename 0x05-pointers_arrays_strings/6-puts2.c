#include "main.h"

/**
 * puts2 - prints characters by skippping one
 * @str: string to print
 * Return: Always 0.
 */

void puts2(char *str)
{
	int length = _strlen(*str) - 1;
	int c = 0;

	while (c < length)
	{
		_putchar(*(str + c));
		c = c + 2;
	}
}


/**
 * _strlen - returns the length of a string
 * @str: the string
 * Return: the length.
 */

 int _strlen(*str)
 {
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
 }
