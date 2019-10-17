#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory using malloc
 *
 * @b: unsigned int
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
