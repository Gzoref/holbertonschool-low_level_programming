#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - Creates array of integers
 *
 * @min: int
 *
 * @max: int
 *
 *  Return: int array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int counter;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	counter = 0;

	while (min <= max)
	{
		ptr[counter] = min;
		min++;
		counter++;
	}
	return (ptr);
}
