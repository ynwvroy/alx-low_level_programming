#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counting the number of unique nodes in looped
 * listint_t linked list
 * @head: Pointer to the head of listint_t to check
 *
 * Return: If list is not looped - 0.
 * Otherwise - Number of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *v, *o;
	size_t x = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	v = head->next;
	o = (head->next)->next;

	while (o)
	{
		if (v == o)
		{
			v = head;
			while (v != o)
			{
				x++;
				v = v->next;
				o = o->next;
			}

			v = v->next;

			while (v != o)
			{
				x++;
				v = v->next;
			}

			return (x);
		}

		v = v->next;
		o = (o->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Printing a listint_t list safely
 * @head: pointer to the head of listint_t list
 *
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x, index = 0;

	x = looped_listint_len(head);

	if (x == 0)
	{
		for (; head != NULL; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < x; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("->[%p] %d\n", (void *)head, head->n);
	}

	return (x);
}
