#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocating 1024 bytes for a buffer
 * @file: Name of file buffer that is storing chars for
 *
 * Return: Pointer to the newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - It closes the file descriptors
 * @fd: File descriptor to be closed
 */

void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copying the contents of a file to another file
 * @argc: The number of arguments that is supplied to the program
 * @argv: Array of pointers to the arguents
 *
 * Return: 0 (Success)
 *
 * Description: If argument count is incorrect - exit code is 97
 *            If file_from does not exist or cannot be read - exit code is 98
 *            if file_to cannot be created or written to - exit code is 99
 *            if file_to or file_from cannot be closed - exit code is 100
 */

int main(int argc, char *argv[])
{
	int from, to, m, n;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	m = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		n = write(to, buffer, m);
		if (to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		m = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (m > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
