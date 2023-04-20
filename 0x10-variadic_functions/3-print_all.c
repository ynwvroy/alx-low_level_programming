#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Printing anything
 * @format: The list of types of arguments that is passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *o, *v = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", v, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", v, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", v, va_arg(list, double));
					break;
				case 's':
					o = va_arg(list, char *);
					if (!o)
						o = "(nil)";
					printf("%s%s", v, o);
					break;
				default:
					i++;
					continue;
			}
			v = ",";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
