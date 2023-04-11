#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplication of the string
 * @str: The actual string to duplicate
 *
 * Return: The duplicated string
 */

char *_strdup(char *str)
{
	int x = 0, v = 1;
	char *o;

	if (str == NULL)
		return (NULL);

	while (str[v])
	{
		v++;
	}

	o = malloc((sizeof(char) * v) + 1);

	if (o == NULL)
		return (NULL);

	while (x < v)
	{
		o[x] = str[x];
		x++;
	}

	o[x] = '\0';
	return (o);
}
