#include "main,h"

/**
 * leet - encodes a string into 1337 (leet)
 * @s: the string
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j, k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (s[i])
	{
		j = 0;
		k = 0;
		while (l[j])
		{
			if (s[i] == l[0])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
