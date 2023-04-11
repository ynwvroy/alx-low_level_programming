#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Converting the params passed to the string program
 * @ac: argument count
 * @av: the vector count
 *
 * Return: ...
 */

char *argstostr(int ac, char **av)
{
	int u = 0, v = 0, w = 0, x = 0;
	char *o;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (v < ac)
	{
		while (av[v][w])
		{
			u++;
			w++;
		}

		w = 0;
		v++;
	}

	o = malloc((sizeof(char) * u) + ac + 1);

	v = 0;
	while (av[v])
	{
		while (av[v][w])
		{
			o[x] = av[v][w];
			x++;
			w++;
		}

		o[x] = '\n';

		w = 0;
		x++;
		v++;
	}

	x++;
	o[x] = '\0';
	return (o);
}
