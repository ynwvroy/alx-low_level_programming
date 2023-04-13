#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: ...
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int u = 0, v = 0, w = 0, x = 0;
	char *o;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[u])
		u++;

	while (s2[w])
		w++;

	if (n >= w)
		x = u + w;
	else
		x = u + n;

	o = malloc(sizeof(char) * x + 1);
	if (o == NULL)
		return (NULL);

	w = 0;
	while (v < x)
	{
		if (v <= u)
			o[v] = s1[v];

		if (v >= u)
		{
			o[v] = s2[w];
			w++;
		}
		v++;
	}
	o[v] = '\0';
	return (o);
}
