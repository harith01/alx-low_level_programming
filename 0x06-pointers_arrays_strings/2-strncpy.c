#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: source string
 * @dest: destination string
 * @n: number of characters to copy
 * Return: A pointer to the destination string
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
