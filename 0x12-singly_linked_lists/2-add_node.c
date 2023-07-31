/*
 * File: 2-add_node.c
 * Auth: Obare Dafiaghor
 */

#include "lists.h"
#include <string.h>

/**
 * add_node - Add node at top of list_t list.
 * @head: pointer to list_t list head.
 * @str: string to add to list_t list.
 *
 * Return: on failure - NULL, else - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
