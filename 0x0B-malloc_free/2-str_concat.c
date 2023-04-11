#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Links two strings of any size
 * @s1: The first string to link
 * @s2: The second string to link
 *
 * Return: The two linked strings
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0, u = 0, v = 0, w = 0;
	char *o;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[u])
		x++;

	w = x + u;
	o = malloc((sizeof(char) * w) + 1);

	if (o == NULL)
		return (NULL);

	u = 0;

	while (v < w)
	{
		if (v <= x)
			o[v] = s1[v];

		if (v >= x)
		{
			o[v] = s2[u];
			u++;
		}

		v++;
	}

	o[v] = '\0';
	return (o);
}
