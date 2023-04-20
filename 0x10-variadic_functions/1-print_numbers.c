#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Printing numbers then followed by a new line afterwards
 * @separator: String that is being printed between numbers
 * @n: Number of integers that is being passed to the function
 * @...: Variable number of numbers to be actually printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digit;
	unsigned int pointer;

	va_start(digit, n);

	for (pointer = 0; pointer < n; pointer++)
	{
		printf("%d", va_arg(digit, int));

		if (pointer != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(digit);
}
