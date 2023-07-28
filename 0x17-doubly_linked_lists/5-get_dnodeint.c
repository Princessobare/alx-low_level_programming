#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node of dlistint_t linked list
 * @head: head of list pointer
 * @index: index of node to be searched for,beginning with 0
 * Return: return the nth node or null
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
