#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: prefix
 * Return: number of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			flag = 0;
			if (s[i] == accept[j])
			{
				flag = 1;
				count++;
				break;
			}
		}
		if (flag == 0)
			break;
	}
	return (count);
}

