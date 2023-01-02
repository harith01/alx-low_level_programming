#include "main.h"

/**
* _strchr - function that locates a char in string
* @s: the string
* @c: the character
* Return: a pointer to the first occurence of the char
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	return ('/0');
}
