#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - ...
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 *
 * Return: ...
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *o;
	unsigned int u;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		o = malloc(new_size);

		if (o == NULL)
			return (NULL);

		return (o);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	o = malloc(new_size);

	if (o == NULL)
		return (NULL);

	for (u = 0; u < old_size && u < new_size; u++)
	{
		o[u] = ((char *) ptr) [u];
	}

	free(ptr);
	return (o);
}
