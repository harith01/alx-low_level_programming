#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Keeps record of dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
#endif
