#include "main.h"
#include <stdio.h>

/**
 * _putchar - Writing the c character to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error, -1 should be returned and errno to be set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
