#include "main.h"

/**
 * _memset - Input point
 * @s: pointing the destination
 * @b: the constant byte
 * @n: the bytes
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
