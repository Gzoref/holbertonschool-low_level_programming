#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  creates a new dog.
 *
 *
 * @name: char type
 *
 * @age: float type
 *
 * @owner: char type
 *
 * Return: Pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int length1, length2, i, j;

	length1 = 0, length2 = 0;
	newDog = malloc(sizeof(struct dog));

	if (newDog == NULL)
		return (NULL);

	while (name[length1++])
		;
	while (owner[length2++])
		;

	newDog->name = malloc(sizeof(newDog->name) * length1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < length1; i++)
		newDog->name[i] = name[i];

	newDog->age = age;


	newDog->owner = malloc(sizeof(newDog->owner) * length2);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (j = 0; j < length2; j++)
		newDog->owner[j] = owner[j];

	return (newDog);
}
