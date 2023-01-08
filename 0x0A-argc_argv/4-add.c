#include <stdio.h>
#include <string.h>
#include <ctype.h>


/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Sum of positive arguments
 */

int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char str[];

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			length = strlen(str);
			for (j = 0; j < length; j++)
			{
				if (isdigit(str[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

