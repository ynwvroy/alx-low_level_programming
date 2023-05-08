#include "main.h"
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int f1);

/**
 * create_buffer - The function that copies the content of a file to
 * another
 * @file: The file buffer
 * Return: The pointer to the new buffer
 */

char *create_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (b);
}

/**
 * close_file - The function that is closing file descriptors
 * @f1: The file descriptor to be closed
 */

void close_file(int f1)
{
	int v;

	v = close(f1);

	if (v == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close f1 %d\n", f1);
		exit(100);
	}
}

/**
 * main - The function that is copying the contents of a file to another
 * @argc: The number of parameters that is supplied
 * @argv: The array of pointers
 * Return: 0 (SUccess)
 */

int main(int argc, char *argv[])
{
	int f;
	int t;
	int r;
	int w;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	b = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, b, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cant't read from file %s\n", argv[1]);
			free(b);
			exit(98);
		}

		w = write(t, b, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(b);
			exit(99);
		}

		r = read(f, b, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(b);
	close_file(f);
	close_file(t);
	return (0);
}
