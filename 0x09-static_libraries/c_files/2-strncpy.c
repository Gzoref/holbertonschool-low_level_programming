#include "holberton.h"

/**
 * _strncpy - concatinate the values of two integers.
 *
 * @dest: arg a
 *
 * @src: arg b
 *
 * @n: arg n
 *
 * Return: void.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)

	dest[i] = '\0';


	return (dest);
}
