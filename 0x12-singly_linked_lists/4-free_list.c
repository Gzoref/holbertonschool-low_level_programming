#include "lists.h"

/**
* free_list - 2function description
*
* @head: Head of node
*
*
* Return: void
*/

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
