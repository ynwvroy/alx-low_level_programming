#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Printing strings then followed by a line that is new
 * @separator: The string that is being printed between strings
 * @n: Number of strings that is passed to the function
 * @...: Variable number of strings that are to be printed
 *
 * Description: If separator is NULL, it should not be printed
 *              If one of the strings is NULL, (nil) is printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	char *o;
	unsigned int x;

	va_start(v, n);

	for (x = 0; x < n; x++)
	{
		o = va_arg(v, char *);

		if (o == NULL)
			printf("(nil)");

		else
			printf("%s", o);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(v);
}
