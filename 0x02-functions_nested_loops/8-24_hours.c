#include "main.h"

/**
 * jack_bauer - prints every minute of the day of JB
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour_1 = '0';
	int hour_2;
	int min_1;
	int min_2;

	while (hour_1 < '3')
	{
	        hour_2 = '0';

		while (hour_2 < '9')
		{
			if (hour_1 == '2' && hour_2 == '4')
				break;
			min_1 = '0';

			while (min_1 < '6')
			{
				min_2 = '0';

				while (min_2 <= '9')
				{
					_putchar(hour_1);
					_putchar(hour_2);
					_putchar(58);
					_putchar(min_1);
					_putchar(min_2);
					_putchar('\n');
					min_2++;
				}
				min_1++;
			}
			hour_2++;
		}
		hour_1++;
	}
}
