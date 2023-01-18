#include "function_pointers.h"

/**
 * print_name - Prints name
 * @f: function pointer
 * @name: name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
