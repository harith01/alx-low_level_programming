include "main.h"

/**
 * _strcat - appends a string to another
 * @dest: the string to be appended
 * @src: the second string
 * Return: the new string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = _strlen(dest);
	i = 0;

	while (*(src_len + i) != '\0')
	{
		*(dest + dest_len + i) = *(src *i);
		i++;
	}
	*(dest + (dest_len + i)) = '\0';
	return (dest);
}


/**
 * _strlen - find the length of a string
 * @str: the string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
