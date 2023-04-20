#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returning all of the parameters sums
 * @n: Number of parameters that are being passed to the function
 * @...: Variable number of parameters that calculate the sum of
 *
 * Return: If n == 0 - 0.
 *         Otherwise - Sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
