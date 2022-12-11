#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;

	digit1 = '0';
	while (digit1 <= '8')
	{
		for (digit2 = digit1 + 1; digit2 <= '9'; digit2++)
		{
			putchar(digit1);
			putchar(digit2);
			if ((digit1 != '8') && (digit2 != '9'))
			{
				putchar(44);
				putchar(32);
			}

		}
		digit1++;
	}
	return (0);
}
