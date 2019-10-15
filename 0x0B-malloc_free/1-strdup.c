#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copy of the string given as a parameter.
 *
 * @str: unsigned int
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	unsigned int counter1, counter2;
	char *strCopy;

	counter1 = 0;
	counter2 = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[counter1] != '\0')
	{
		counter1++;
	}
	counter1++;

	strCopy = malloc(counter1 * sizeof(char));

	while (counter2 < counter1)
	{
		strCopy[counter2] = str[counter2];
		counter2++;
	}

	return (strCopy);
}
