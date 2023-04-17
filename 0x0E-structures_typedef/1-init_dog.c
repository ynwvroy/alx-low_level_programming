#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialization of a dog structure
 * @d: Dog structure
 * @name: Title of the dog
 * @age: The actual age of the dog
 * @owner: The dog handler
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
