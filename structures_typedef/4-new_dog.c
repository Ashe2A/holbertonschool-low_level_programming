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

	doggie = malloc(sizeof(char) * _strlen(name)
	+ sizeof(char) * _strlen(owner) + sizeof(float));

	init_dog(doggie, _strcpy((*dog_t).name, name), age, _strcpy((*dog_t).owner, owner));

	if (doggie == NULL)
	{
		return (NULL);
	}
	
	return (doggie);
}
