#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
