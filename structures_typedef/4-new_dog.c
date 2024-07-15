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

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
	{
		free(doggie);
		return (NULL);
	}

	(*doggie).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*doggie).name == NULL)
	{
		free((*doggie).name);
		free(doggie);
		return (NULL);
	}
	(*doggie).name = _strcpy((*doggie).name, name);

	(*doggie).age = age;

	(*doggie).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*doggie).owner == NULL)
	{
		free((*doggie).name);
		free((*doggie).owner);
		free(doggie);
		return (NULL);
	}
	(*doggie).owner = _strcpy((*doggie).owner, owner);

	return (doggie);
}
