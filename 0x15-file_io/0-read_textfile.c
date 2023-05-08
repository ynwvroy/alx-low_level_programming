#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reading the text file print to STDOUT
 * @filename: The text file that is being read
 * @letters: The number of letters to be read
 * Return: 1 when successful, else 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t v;
	ssize_t o;
	ssize_t p;

	v = open(filename, O_RDONLY);
	if (v == -1)
	{
		return (0);
	}
	x = malloc(sizeof(char) *letters);
	p = read(v, x, letters);
	o = write(STDOUT_FILENO, x, p);

	free(x);
	close(v);
	return (o);
}
