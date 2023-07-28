#include "lists.h"

/**
 * sum_dlistint - shows the total of all data (n) in doubly linked list
 *
 * @head: list head
 * Return: total of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
