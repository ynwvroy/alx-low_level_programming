#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reading the text file print to STDOUT
 * @filename: The text file that is being read
 * @letters: The number of letters to be read
 * Return: w - The actual number of bytes that is read and printed
 *          0 when the function fails or filename becomes NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t v;
	ssize_t o;
	ssize_t p;

	v = open(filename, O_RDONLY);
	if (v == -1)
		return (0);
	x = malloc(sizeof(char) *letters);
	p = read(v, x, letters);
	o = write(STDOUT_FILENO, x, p);

	free(x);
	close(v);
	return (o);
}
