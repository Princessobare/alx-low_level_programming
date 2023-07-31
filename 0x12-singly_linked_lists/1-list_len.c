/*
 * File: 1-list_len.c
 * Auth: Obare Dafiaghor
 */

#include "lists.h"

/**
 * list_len - Find number of elements in linked list_t list.
 * @h: linked list_t list.
 *
 * Return: number of elements in list_t list
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
