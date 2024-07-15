#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "1-init_dog.c"

/**
 * new_dog - makes a new dog
 * @name: doggie name
 * @age: doggie age
 * @owner: dog owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	doggie = malloc(sizeof(name) + sizeof(age) + sizeof(owner));

	init_dog(doggie, name, age, owner);

	if (doggie == NULL)
	{
		return (NULL);
	}

	return (doggie);
}
