#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * @argc: argument count
 * @argv: arguments vector
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
