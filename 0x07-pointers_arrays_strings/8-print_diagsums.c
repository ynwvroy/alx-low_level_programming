#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Input point
 * @a: entry
 * @size: entry
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{

	int x, z, sum4 = 0, sum5 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		sum4 = sum4 + a[x];

	for (z = size - 1; z <= (size * size) - size; z = z + size - 1)
		sum5 = sum5 + a[z];
	printf("%d, %d\n", sum4, sum5);
}
