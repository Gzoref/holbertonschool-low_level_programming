#include "lists.h"

/**
 * find_listint_loop - Finds loop in linked list
 *
 * @head: Pointer to head
 *
 *
 * Return: listint_t
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (fast);
		}
	}
	return (NULL);
}
