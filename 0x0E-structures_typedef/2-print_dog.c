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
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %f\n", (d->age == NULL) ? "(nil)" : d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
