#include <stdio.h>
#include "dog.h"

/**
 * init_dog - create a dog
 * @d: doggie
 */
void print_dog(struct dog *d)
{
	float null;

	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s", (*d).name);
		}

		if ((*d).age == null)
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Name: %6f", (*d).age);
		}

		if ((*d).owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Name: %s", (*d).owner);
		}
	}
}
