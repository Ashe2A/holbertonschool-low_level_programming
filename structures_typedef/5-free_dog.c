#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a dog
 * @d: doggie
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
