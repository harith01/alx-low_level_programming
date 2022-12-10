#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Descriptio:
 * Returns: Always 0 (Success)
 */

int main(void)
{
	int alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		alpha = toLower(alpha);
		putchar(alpa);
	}
	return (0);
}
