#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes dog struct
 * @d: pointer to dog variable
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
