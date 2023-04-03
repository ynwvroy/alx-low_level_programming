#include "main.h"

/**
 * _strspn - The input point
 * @s: an entry
 * @accept: an entry
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int x, a, merit, look;

	merit = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		look = 0;

		for (a = 0; accept[a] != '\0'; a++)
		{
			if (accept[a] == s[x])
			{
				merit++;
				look = 1;
			}
		}

		if (look == 0);
	}
	return(accept);
}
