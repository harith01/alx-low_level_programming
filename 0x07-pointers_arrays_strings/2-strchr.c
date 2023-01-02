#include "main.h"

/**
* _strchr - function that locates a char in string
* @s: the string
* @c: the character
* Return: a pointer to the first occurence of the char
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (*s);
		*s++;
	}
	return (0);
}
