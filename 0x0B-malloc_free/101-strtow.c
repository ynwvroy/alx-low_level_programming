#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locating pointer that marks end of the first word within a string
 * @str: String that is being searched for
 *
 * Return: Pointer that marks end of initial word pointed by str
 */

int word_len(char *str)
{
	int pointer = 0, len = 0;

	while (*(str + pointer) && *(str + pointer) != ' ')
	{
		len++;
		pointer++;
	}

	return (len);
}

/**
 * count_words - Counting words contained in a string
 * @str: String that is being searched
 *
 * Return: Number of words within str
 */

int count_words(char *str)
{
	int pointer = 0, words = 0, len = 0;

	for (pointer = 0; *(str + pointer); pointer++)
		len++;

	for (pointer = 0; pointer < len; pointer++)
	{
		if (*(str + pointer) != ' ')
		{
			words++;
			pointer += word_len(str + pointer);
		}
	}

	return (words);
}

/**
 * strtow - Splitting strings to words
 * @str: the split string
 *
 * Return: If str = NULL, str = "", or function actually fails - NULL
 *         Otherwise - pointer to an array of strings
 */

char **strtow(char *str)
{
	char **strings;
	int pointer = 0, words, x, mark, v;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (x = 0; x < words; x++)
	{
		while (str[pointer] == ' ')
			pointer++;

		mark = word_len(str + pointer);

		strings[x] = malloc(sizeof(char) * (mark + 1));

		if (strings[x] == NULL)
		{
			for (; x >= 0; x--)
				free(strings[x]);

			free(strings);
			return (NULL);
		}

		for (v = 0; v < mark; v++)
			strings[x][v] = str[pointer++];

		strings[x][v] = '\0';
	}
	strings[x] = NULL;

	return (strings);
}
