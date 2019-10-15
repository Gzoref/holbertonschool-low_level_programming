#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Print name of program
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

	character = malloc(sizeof(char) * size);

	if (size == 0 || character == NULL)
	{
		return (NULL);
	}

	while (counter < size)
	{
		character[counter] = c;
		counter++;
	}

	character[counter] = '\0';

	free(character);

	return (character);
}
