#include "lists.h"

/**
 * print_listint - Printing all elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: The node number
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}
