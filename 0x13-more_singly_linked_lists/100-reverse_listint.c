#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list
*
* @head: Head of linked lists
*
* Return: listint_t
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node = NULL;


	if (head == NULL)
	{
		return (NULL);
	}

	current = *head;
	*head = NULL;

	while (current != NULL)
	{
		next_node = current->next;

		current->next = *head;
		*head = current;
		current = next_node;
	}

	return (*head);
}
