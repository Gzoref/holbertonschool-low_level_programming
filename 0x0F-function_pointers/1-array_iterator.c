#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name.
 *
 * @name: char pointer
 *
 * @f: pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
           unsigned int i;
	   {
		   if (array && size && action)
			   for (i = 0; i < size; i++)
				   action(i);
	   }
}
