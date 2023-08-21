#include <stdio.h>
#include "main.h"

/**
 * _strchr - Input point
 * @s: entry
 * @c: entry
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{

	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		return (s + x);
	}

	return (NULL);
}
