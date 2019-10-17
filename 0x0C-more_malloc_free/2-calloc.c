#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array.
 *
 * @nmemb: number of elements
 *
 * @size: bytes of each element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strArray;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	strArray = malloc(nmemb * size);

	if (strArray == NULL)
	{
		return (NULL);
	}

	while (counter < (nmemb * size))
	{
		strArray[counter] = 0;
		counter++;
	}
	return (strArray);
}
