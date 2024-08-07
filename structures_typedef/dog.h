#ifndef DOGGIE
#define DOGGIE

/**
 * struct dog - Dogs
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog's owner
 *
 * Description: Create a doggie
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif

#ifndef FUNCTION
#define FUNCTION

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
