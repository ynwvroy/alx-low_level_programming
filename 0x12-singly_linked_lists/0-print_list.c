#include <stdio.h>
#include "lists.h"

/**
 * print_list - All elemnts of a linked list are tempted
 * @h: pointer to the list_t list to print
 *
 * Return: Number of nodes to be printed
 */

size_t print_list(const list_t *h)
{
	const list_t *curret = h;
	size_t x = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);

		x++;
		current = current->next;
	}
}
