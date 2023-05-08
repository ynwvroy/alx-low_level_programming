#include "main.h"

/**
 * create_file - The function that is creating a file
 * @filename: The name of a file to be created
 * @text_content: The string that is to be added in the file
 * Return: 1 (Success), -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int x;
	int m;
	int n;

	m = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (m = 0; text_content[m];)
			m++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(x, text_content, m);

	if (x == -1 || n == -1)
	{
		return (-1);
	}

	close(x);
	return (1);
}
