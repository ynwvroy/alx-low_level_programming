#include <unistd.h>

/**
 * _putchar - writing the character c to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error, -1 returned and errno set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
