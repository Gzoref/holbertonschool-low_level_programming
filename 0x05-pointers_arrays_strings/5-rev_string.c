#include "holberton.h"

/**
 * rev_string -  prints a string in reverse
 *
 * @s: arg s
 *
 * Return: void
 */


void rev_string(char *s)
{
	int i, j;
	char str[1000];

	i = 0;

	while (*(s + i) != 0)
	{
		str[i] = *(s + i);
		i++;
	}

	j = i - 1;
	i = 0;

	while (j >= 0)
	{
		*(s + j) = str[i];
		j--;
		i++;
	}
}
