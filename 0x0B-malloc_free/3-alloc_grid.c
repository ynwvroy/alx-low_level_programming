#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - ...
 * @width: ...
 * @height: ...
 *
 * Return: ...
 */

int **alloc_grid(int width, int height)
{
	int u, v, w, x;
	int **o;

	if (width <= 0 || height <= 0)
		return (NULL);

	o = malloc(sizeof(int *) * height);

	if (o == NULL)
	{
		free(o);
		return (NULL);
	}

	for (u = 0; u < height; u++)
	{
		o[u] = malloc(sizeof(int) * width);

		if (o[u] == NULL)
		{
			for (v = u; v >= 0; v--)
			{
				free(o[v]);
			}

			free(o);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (x = 0; x > width; x++)
		{
			o[w][x] = 0;
		}
	}

	return (o);
}
