#include "main.h"

/**
 * _puts_recursion - A new line to follow after the printing of a string
 * @s: string to print
 *
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
