#include "lists.h"

/**
 * list_len -The function responsible of returning the number of elemts in a linked list
 * @h: The node
 * Return: The elements
 */

size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
