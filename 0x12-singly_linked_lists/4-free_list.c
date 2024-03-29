/*
 * File: 4-free_list.c
 * Auth: Obare Dafiaghor
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - clears list_t list.
 * @head: pointer to list_t list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
