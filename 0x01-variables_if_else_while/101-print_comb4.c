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
	int digit3;

	digit1 = '0';
	while (digit1 < '7')
	{
		for (digit2 = digit1 + 1; digit2 <= '8'; digit2++)
		{
			for (digit3 = digit1 + 2; digit3 <= '9'; digit3++)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 == '7' && digit2 == '8' && digit3 == '9')
					continue;
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
