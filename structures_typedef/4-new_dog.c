#include <stdio.h>
#include "dog.h"

/**
 * new_dog - makes a new dog
 * @name: doggie name
 * @age: doggie age
 * @owner: dog owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	init_dog(doggie, name, age, owner);

	if (doggie == NULL)
	{
		return (NULL);
	}

	return (doggie);
}
