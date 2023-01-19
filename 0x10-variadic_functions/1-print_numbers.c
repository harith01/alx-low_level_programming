#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with a separator
 * @separator: separator
 * @n: number of numbers to be printed
 * @...: unknown numbers
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d \n", va_arg(ap, int));
		else
			printf("%d %s", va_arg(ap, int), separator);
	}
	va_end(ap);
}
