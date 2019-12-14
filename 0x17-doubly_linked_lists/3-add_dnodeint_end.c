#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 *
 * @head: struct
 *
 * @n: const int
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL, *end = NULL;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;

	if (*head == NULL)
	{
		*head = list;
		list->next = NULL;
		return (*head);
	}
	end = *head;

	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = list;
	list->next = NULL;

	return (*head);
}
