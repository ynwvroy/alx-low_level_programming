#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int title_l = 0, handler_l = 0;

	if (name != NULL && owner != NULL)
	{
		title_l = _strlen(name) + 1;
		handler_l = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * title_l);

		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}

		max_dog->owner = malloc(sizeof(char) * handler_l);

		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = _strcpy(max_dog->name, name);
		max_dog->owner = _strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}

	return (max_dog);
}

/**
 * _strlen - Returning the length of a string
 * @s: The string to count
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}

/**
 * _strcpy - Copying a string
 * @dest: The value of the destination
 * @src: The value of the source
 *
 * Return: The pointer that is being dest
 */

char *_strcpy(char *dest, char *src)
{
	int o;

	for (o = 0; src[o] != '\0'; o++)
	{
		dest[o] = src[o];
	}

	dest[o++] = '\0';

	return (dest);
}
