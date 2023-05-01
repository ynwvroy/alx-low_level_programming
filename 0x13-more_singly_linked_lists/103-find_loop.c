#include "lists.h"

/**
 * free_listint_safe - Freeing a linked list
 * @h: pointer to the first node in linked list
 *
 * Return: NUmber of elements in freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t v = 0;
	int x;
	listint_t *o;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			o = (*h)->next;
			free(*h);
			*h = o;
			v++;
		}
		else
		{
			free(*h);
			*h = NULL;
			v++;
			break;
		}
	}

	*h = NULL;

	return (v);
}
