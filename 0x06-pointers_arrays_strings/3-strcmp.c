#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between the ascii chars
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, o = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		o = s1[i] - s2[i];
	}
	return (o);
}
