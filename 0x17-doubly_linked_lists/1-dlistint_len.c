#include "lists.h"

/**
 * dlistint_len - shows amount of elements in a doubly linked list
 *
 * @h: list head
 * Return: amount of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
