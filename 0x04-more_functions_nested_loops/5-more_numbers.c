#include "main.h"

/**
 * more_numbers - 0 to 14, 10 times
 *
 * Return: Always 0.
 */

void more_numbers(void);
{
	int i = 0;
	int num;

	while (i < 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{
				_putchar(num);
			}
			num++;
		}
		i++;
	}
}
