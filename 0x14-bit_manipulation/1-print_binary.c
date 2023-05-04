#include "main.h"

/**
 * print_binary - Printing binary equivalent of a decimal number
 * @n: The number that is being printed in the binary
 */

void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int v;

	for (x = 63; x >= 0; x--)
	{
		v = n >> x;

		if (v & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
