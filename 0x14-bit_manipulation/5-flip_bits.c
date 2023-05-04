#include "main.h"

/**
 * flip_bits - Counting the number of bits to change so as to get
 * from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int v;
	unsigned long int o = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		v = o >> x;
		if (v & 1)
			count++;
	}

	return (count);
}
