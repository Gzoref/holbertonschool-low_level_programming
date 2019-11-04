#include "lists.h"

/**
 * sum_listint - Sum of all data (n)
 *
 * @head: Head of node
 *
 *
 * Return: void
 */

int sum_listint(listint_t *head)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
