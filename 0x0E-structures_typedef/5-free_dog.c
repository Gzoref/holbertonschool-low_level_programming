#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free
 *
 * @d: struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
