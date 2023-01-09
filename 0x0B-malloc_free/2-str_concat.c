#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2);

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j])
	{
		s[i] = s2[j];
		i++;
		j++;
	}

	s[i] = '\0';

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
