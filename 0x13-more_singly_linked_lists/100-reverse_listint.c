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
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_node = NULL;


	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		/*  Next node  */
		next_node = current->next;

		/*  Reverse node's pointer  */
		current->next = prev;

		/*  Move one poition ahead  */
		prev = current;
		current = next_node;
	}
	*head = prev;
	return (*head);
}
