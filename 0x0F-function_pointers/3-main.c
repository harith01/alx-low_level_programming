#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - perform mathematical operations
 * @argc: argument count
 * @argv; argument vector
 * Return: result of operation
 */

int main(int argc, char **argv)
{
	int op1 = atoi(argv[1]);
	int op2 = atoi(argv[3]);
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(op1, op2));

	return (0);
}
