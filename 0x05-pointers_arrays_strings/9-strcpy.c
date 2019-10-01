#include "holberton.h"

/**
 * _strcpy -  copies string
 *
 * @dest: arg char
 * @src: arg char
 *
 * Return: string to stdout
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
