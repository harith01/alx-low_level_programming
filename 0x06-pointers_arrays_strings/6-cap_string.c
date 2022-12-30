#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: the string
 * Return: Pointer to the capitalzed string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\t'
		|| s[i - 1] == '\n' || s[i - 1] == ','
		|| s[i - 1] == ';' || s[i - 1] == '!'
		|| s[i - 1] == '"' || s[i - 1] == '?'
		|| s[i - 1] == '(' || s[i - 1] == ')'
		|| s[i - 1] == '{' || s[i - 1] == '}'
		|| s[i - 1] == ',') 
		&& (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
		else if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		i++;
	}
	return (s);
}
