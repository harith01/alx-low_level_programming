#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

