#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at nth index
 *
 * @head: Head of node
 *
 * @index: index
 *
 * Return: 1 succeed, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = *head;
	dlistint_t *next_node;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}

	for (count = 0; prev != NULL && count < index - 1 ; count++)
	{
		prev = prev->next;
	}

	if (prev == NULL || prev->next == NULL)
	{
		return (-1);
	}
	next_node = prev->next->next;
	free(prev->next);

	prev->next = next_node;

	return (1);
}
