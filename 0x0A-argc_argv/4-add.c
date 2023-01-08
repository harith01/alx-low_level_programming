#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * check_digit - check if a string contains a digit
 * @s: the string
 * Return: true, if it doesnt containa digit, false otherwise
 */

int check_digit(char *s)
{
	int i = 0;
	bool x = true;

	while (s[i])
	{
		if (isdigit(s[i]) == 0)
		{
			x = false;
			break;
		}
		x = true;
		i++;
	}
	return (x);
}

/**
 * main - Prints the sum of the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Sum of argv
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (check_digit(argv[i]) == false)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
