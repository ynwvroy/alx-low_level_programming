#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Input point
 * @s: entry
 * @accept: entry
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int x, a;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[x] == accept[a])
				return (s + x);
		}
	}
	return (NULL);
}
