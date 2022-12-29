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
		if ((s[i - 1] == 32 || s[i - 1] == 10
		|| s[i - 1] == 44 || s[i - 1] == 59
		|| s[i - 1] == 46 || s[i - 1] == 46
		|| s[i - 1] == 33 || s[i - 1] == 63
		|| s[i - 1] == 34 || s[i - 1] == 123
		|| s[i - 1] == 125)  && (s[i] >= 97
		&& s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
	}
}
