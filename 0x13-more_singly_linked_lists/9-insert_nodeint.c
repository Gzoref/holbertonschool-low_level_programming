#include "lists.h"

/**
 * insert_nodeint_at_index - Add node at nth index
 *
 * @head: Head of node
 *
 * @idx: index
 *
 * @n: struct int
 *
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current_node, *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	while (current_node)
	{

		if (count == (idx - 1))
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		count++;
		current_node = current_node->next;
	}
	free(new_node);

	return (NULL);
}
