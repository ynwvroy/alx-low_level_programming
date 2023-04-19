#include "function_pointers.h"

/**
 * print_name - Printing of a name
 * @name: The name that is being printed
 * @f: The pointer that is functioning
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
