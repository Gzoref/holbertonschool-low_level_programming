#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints a struct dog
 *
 * @d: pointer to d dog
 *
 * Return: Pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
        if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		       d->name, d->age, d->owner);
	}
}
