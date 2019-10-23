#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes func as a parameter on each array elem.
 *
 * @array: int pointer
 *
 * @size: size_t
 *
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
