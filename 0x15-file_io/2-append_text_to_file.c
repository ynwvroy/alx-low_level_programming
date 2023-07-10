#include "main.h"

/**
 * append_text_to_file - Appending the text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: String to add to the end of the file
 *
 * Return: If function fails or filename is NULL - -1
 *         If the file does not exist user lacks write permissions - -1
 *         Otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, v, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	v = write(x, text_content, len);

	if (x == -1 || v == -1)
		return (-1);

	close(x);

	return (1);
}
