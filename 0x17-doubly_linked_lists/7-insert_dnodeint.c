#include "lists.h"

/**
 * insert_dnodeint_at_index - Add node at nth index
 *
 * @h: Head of node
 *
 * @idx: index
 *
 * @n: struct int
 *
 * Return: dlistint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current, *new_node = malloc(sizeof(dlistint_t));

	if (h == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	current = *h;

	while (current)
	{
		if (count == (idx - 1))
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);

	return (NULL);
}
