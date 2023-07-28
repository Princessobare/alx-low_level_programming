#include "lists.h"

/**
 * free_dlistint - clears the dlistint_t list.
 * @head: head of list pointer
 * Return: nothing
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
