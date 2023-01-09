#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: the string to be duplicated
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int len, i;
	char *s;

	len = _strlen(str);

	if (str == NULL)
		s = NULL;
	else
	{
		s = malloc(sizeof(char) * len + 1);
		if (s == NULL)
			s = NULL;
		else
		{
			for (i = 0; i <= len; i++)
				s[i] = str[i];
		}
	}
	return (s);
}


/**
 * _strlen - returns the length of a string
 * @str: the string
 * Return: length of str
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
