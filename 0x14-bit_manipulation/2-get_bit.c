#include "main.h"

/**
 * get_bit - The returning value of a bit at an index in decimal number
 * @n: The number that is being searched for
 * @index: The index of the bit
 *
 * Return: The value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
