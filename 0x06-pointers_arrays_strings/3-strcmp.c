#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between the ascii chars
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, o;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			o = 0;
			break;
		}
		else
		{
			o = s1[i] - s2[i];
			break;
		}
	}
	return (o);
}
