#include "main.h"

/**
 * append_text_to_file - The function that is appending the text at the
 * end of a file
 * @filename: The name of the file
 * @text_content: The string to be added
 * Return: 1 (Success), -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int m;
	int n;

	m = 0;
	n = 0;

	x = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[m])
			m++;
	}
	if (x == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		n = write(x, text_content, m);
		close(x);
	}
	if (n != m)
	{
		return (-1);
	}
	return (1);
}
