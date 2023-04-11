#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creating the array of the chars
 * @size: The array size
 * @c: The char that is filling in the array
 *
 * Return: the filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int v;
	char *o;

	if (size == 0)
		return (NULL);

	o = malloc(size * sizeof(char));

	if (o == NULL)
		return (NULL);

	for (v = 0; v < size; v++)
	{
		o[v] = c;
	}

	return (o);
}
