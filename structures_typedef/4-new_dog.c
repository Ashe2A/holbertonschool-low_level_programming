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
 *
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	char *namecpy;
	char *ownercpy;

	doggie = malloc(sizeof(char) * _strlen(name)
	+ sizeof(char) * _strlen(owner) + sizeof(float));

	init_dog(doggie, name, age, owner);

	if (doggie == NULL)
	{
		return (NULL);
	}

	namecpy = malloc(sizeof(name));
	ownercpy = malloc(sizeof(owner));
	_strcpy(namecpy, name);
	_strcpy(ownercpy, owner);

	return (doggie);
}
