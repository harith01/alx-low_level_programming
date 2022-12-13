#include "main.h"

/**
 * print_alphabet_x10 -
 * Description:
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	int aplha;

	while (counter < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		counter++;
	}
}
