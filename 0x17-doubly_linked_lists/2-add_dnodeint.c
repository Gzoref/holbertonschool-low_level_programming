#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *
 * @head: Head
 *
 * @n: Value
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
	{
		return (NULL);
	}

	list->n = n;
	list->next = *head;
	*head = list;
	return (*head);
}
