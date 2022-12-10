#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Descriptio:
 * Returns: Always 0 (Success)
 */

int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	return (0);
}
