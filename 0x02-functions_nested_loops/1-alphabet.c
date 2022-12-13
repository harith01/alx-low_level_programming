#include "main.h"
/**
 * print_alphabet - function
 * Description: print a-z
 * Return: void
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
