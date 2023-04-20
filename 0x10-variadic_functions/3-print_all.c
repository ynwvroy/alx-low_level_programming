#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Printing anything
 * @format: The list of types of arguments that's passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list argm;
	unsigned int i;
	char *o;
	char *v;

	i = 0;
	v = "";
	va_start(argm, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", v, va_arg(argm, int));
					break;
				case 'i':
					printf("%s%d", v, va_arg(argm, int));
					break;
				case 'f':
					printf("%s%f", v, va_arg(argm, double));
					break;
				case 's':
					o = va_arg(argm, char *);
					if (!o)
						o = "(nil)";
					printf("%s%s", v, o);
					break;
				default:
					i++;
					continue;
			}
			v = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(argm);
}
