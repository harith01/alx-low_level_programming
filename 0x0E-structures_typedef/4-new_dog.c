#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * *_strcpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NuLL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name != NULL && owner != NULL)
	{
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		_strcpy(dog->name, name);
		 _strcpy(dog->owner, owner);
		dog->age = age;
	}
	return (dog);
}
