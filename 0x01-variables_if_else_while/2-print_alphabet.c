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
	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	putchar("\n");
	return (0);
}
