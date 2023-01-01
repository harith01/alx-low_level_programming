#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @str: the string
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i,j;
	char x = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char y = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (x[j])
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
