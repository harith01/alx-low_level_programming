#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: first string
 * @src: second string
 * @n: number of characters to be appended
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (*(dest + i) != '\0')
	{
		len++;
	}

	while (*(src + i) != '\0')
	{
		*(dest + len) = *(src + i);
		len++;
		i++;
		if (n == i - 1)
			break;
	}
}
