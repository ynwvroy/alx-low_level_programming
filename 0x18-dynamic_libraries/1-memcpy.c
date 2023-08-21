#include "main.h"

/**
 * _memcpy - Input point
 * @dest: entry
 * @src: entry
 * @n: entry
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
