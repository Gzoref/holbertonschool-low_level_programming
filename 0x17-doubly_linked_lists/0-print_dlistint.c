#include "lists.h"

/**
 * print_dlistint - Prints all elements of ll
 *
 * @h: Head dlistint_t
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
