#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e'){
			continue;
		}
		else
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
