#include "main.h"

/**
 * _strspn - Input point
 * @s: entry
 * @accept: entry
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int x = 0
		int a;

	while (*s)
	{

		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{

				x++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (x);
		}
		s++;

	}
	return (x);
}
