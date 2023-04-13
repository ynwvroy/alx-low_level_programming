#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocating the memory
 * @b: size that is being allocated
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *o;

	o = malloc(b);

	if (o == NULL)
		exit(98);

	return (o);
}
