#include <stdio.h>
#include "main.h"

/**
 * _strstr - Input point
 * @haystack: entry
 * @needle: entry
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *four = haystack;
		char *five = needle;

		while (*four == *five && *five != '\0')
		{
			four++;
			five++;
		}

		if (*five == '\0')
			return (haystack);
	}
	return (NULL);
}
