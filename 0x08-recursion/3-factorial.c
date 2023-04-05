#include "main.h"

/**
 * factorial - The factorial of a number to be calculated
 * @n: the factorial to be calculated by the number
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
