#include "main.h"
#include <stdlib.h>

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 *
 * Return: value of the integer
 */

int *array_range(int min, int max)
{
	int *o, u = 0;

	if (min > max)
		return (NULL);

	o = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (o == NULL)
		return (NULL);

	while (min <= max)
	{
		o[u] = min;
		u++;
		min++;
	}

	return (o);
}
