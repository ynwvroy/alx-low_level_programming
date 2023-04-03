#include "main.h"

/**
 * _strspn - The input point
 * @s: an entry
 * @accept: an entry
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int x, a, value, check;

	value = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;

		for (a = 0; accept[a] != '\0'; a++)
		{
			if (accept[a] == s[x])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0);
	}
	return(accept);
}
