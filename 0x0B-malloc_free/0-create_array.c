#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Returns a pointer to a newly allocated space in memory.
 *
 * @size: unsigned int
 *
 * @c: char
 *
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int counter;
	char *character;

	counter = 0;


	if (size == 0)
	{
		return (NULL);
	}

	character = malloc(sizeof(char) * size);

	if (character == NULL)
	{
		return (NULL);
	}
	while (counter < size)
	{
		character[counter] = c;
		counter++;
	}

	character[counter] = '\0';

	return (character);
}
