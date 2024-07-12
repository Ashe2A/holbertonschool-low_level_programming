#include <stdio.h>
#include "dog.h"

/**
 * init_dog - create a dog
 * @d - doggie
 * @name - doggie name
 * @age - doggie age
 * @owner - dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

    my_dog.name = "Bobby";
	my_dog.age = 12;
	my_dog.owner = "Granny";
    
	return (0);
}