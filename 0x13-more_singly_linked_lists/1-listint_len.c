#include "lists.h"

/**
 * listint_len - Returning number of elements in linked list
 * @h: Linked list of type listint_t that is being traversed
 *
 * Returned: Node number
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
