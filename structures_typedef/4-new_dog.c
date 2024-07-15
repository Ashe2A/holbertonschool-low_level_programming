#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "1-init_dog.c"
#include "../pointers_arrays_strings/9-strcpy.c"

/**
 * new_dog - makes a new dog
 * @name: doggie name
 * @age: doggie age
 * @owner: dog owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	char *namecpy;
	char *ownercpy;

	doggie = malloc(sizeof(name) + sizeof(age) + sizeof(owner));

	init_dog(doggie, name, age, owner);

	if (doggie == NULL)
	{
		return (NULL);
	}

	namecpy = malloc(sizeof(name));
	ownercpy = malloc(sizeof(owner));
	_strcpy(namecpy, name);
	_strcpy(ownercpy, owner);

	free(doggie);
	free(namecpy);
	free(ownercpy);

	return (doggie);
}