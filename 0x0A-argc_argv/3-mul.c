#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < 3; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);

	return (0);
}
