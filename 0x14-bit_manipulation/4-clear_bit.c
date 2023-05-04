#include "main.h"

/**
 * clear_bit - Setting the value of a given bit to 0
 * @n: The pointer to the number that is being changed
 * @index: The index of the bit that is being cleared
 *
 * Return: 1 if successful, -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
