#include "lists.h"

/**
 *  function - function description
 *
 *  @param1: description
 *
 *  @param2: description
 *
 *  Return return type
 */

size_t print_listint(const listint_t *h)
{
	unsigned int index = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}

