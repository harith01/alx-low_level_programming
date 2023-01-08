#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Sum of positive arguments
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
			if (check_number(argv[i] == 1))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
				break:
			}
		}
		print("%d\n", sum);
	}
	return (0);
}

/**
 * check_number - check if a string contains a non-digit
 * @c: the string
 * Return: 1 if string does not contain a non digit, 0 otherwise
 */
int check_number(char *c)
{
	int a, i = 0;

	while (c[i])
	{

		if (isdigit(c[i]) != 0)
			a = 1;
		else
		{
			a = 0;
			break;
		}
		i++;
	{
	return (a);
}
