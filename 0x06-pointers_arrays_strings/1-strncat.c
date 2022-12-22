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
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
