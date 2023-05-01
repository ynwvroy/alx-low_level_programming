#include "lists.h"

/**
 * sum_listint - Calculating the sum of data in listint_t list
 * @head: The first node in linked list
 *
 * Return: The resulting sum
 */

int sum_listint(listint_t *head)
{
	int o = 0;
	listint_t *v = head;

	while (v)
	{
		o += v->n;
		v = v->next;
	}

	return (o);
}
