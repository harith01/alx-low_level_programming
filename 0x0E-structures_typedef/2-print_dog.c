#include <stdio.h>
#include "main.h"

/**
 * print_dog - Print the members of dog
 * @d: pointer to the struct variable
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? "(nil)" : d->name);
		printf("Age: %f\n", (d->age) ? "(nil)" : d->age);
		printf("Owner: %s\n", (d->owner) ? "(nil)" : d->owner);
	}
}
