#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: the member number
 * @size: size
 *
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int u = 0, v = 0;
	char *o;

	if (nmemb == 0 || size == 0)
		return (NULL);

	v = nmemb * size;
	o = malloc(v);

	if (o == NULL)
		return (NULL);

	while (u < v)
	{
		o[u] = 0;
		u++;
	}

	return (o);
}
