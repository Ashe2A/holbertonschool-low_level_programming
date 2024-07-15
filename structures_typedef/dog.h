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
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef DOGGIE_TYPE
#define DOGGIE_TYPE

/**
 * struct dog_t - Dog new type
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog's owner
 *
 * Description: New type of doggie
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef FUNCTION
#define FUNCTION

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
