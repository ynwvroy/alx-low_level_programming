#include "lists.h"

/**
 * print_list - The function that is printing all elements of a list
 * @h: Node number
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t v;

	v = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		v++;
	}
	return (v);
}
