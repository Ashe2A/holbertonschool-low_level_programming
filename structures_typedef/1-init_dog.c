#include <stdio.h>
#include "dog.h"

/**
 * init_dog - create a dog
 * @d: doggie
 * @name: doggie name
 * @age: doggie age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
