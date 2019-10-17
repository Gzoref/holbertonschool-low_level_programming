#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatinates two strings
 *
 * @s1: char pointer
 *
 * @s2: char pointer
 *
 * @n: unsigned int
 *
 * Return: Pointer to s1, n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter1, counter2, i, j;
	char *strTemp;

	counter1 = 0;
	counter2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[counter1] != '\0')
		counter1++;
	while (s2[counter2] != '\0')
		counter2++;

	if (n > counter2)
	{
	strTemp = malloc(sizeof(char) * (counter1 + counter2 + 1));
	}
	else
	{
		strTemp = malloc(sizeof(char) * (counter1 + n + 1));
	}

	if (strTemp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < counter1; i++)
	{
		strTemp[i] =  s1[i];
	}

	for (j = 0; j < n; j++)
	{
		strTemp[i + j] = s2[j];
	}
	return (strTemp);
}
