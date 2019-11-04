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
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;

	if (head == NULL)
	{
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		return (new_node);
	}
	listint_t *current_node = *head;

	while (idx - 1 > 0)
	{
		current_node = current_node->next;
		idx--;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (*head);
}
