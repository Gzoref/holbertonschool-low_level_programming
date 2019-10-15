#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - convert arguments on command line to strings
 *
 * @ac: int type
 *
 * @av: pointer to array
 *
 * Return: args as strings
 */

char *argstostr(int ac, char **av)
{
	int counter1 = 0, counter2 = 0, counter3, length = 0;
	char *strTemp;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (counter1 < ac)
	{
		counter2 = 0;

		while (ac[counter1][counter2] != 0)
		{
			length++;
			counter1++, counter2++;
		}
	}
	length++;
	strTemp = (char *)malloc(sizeof(char) * length);
	if (strTemp == 0)
	{
		free(strTemp);
		return (NULL);
	}
	counter1 = 0;
	while (counter1 < ac)
	{
		counter2 = 0;

		while (av[counter1][counter2] != 0)
		{
			strTemp[counter3] = av[counter1][counter2];
			counter1++, counter3++;
			strTemp[counter3] = '\n';
			counter1++, counter3++;
		}
		strTemp[counter3] = 0;
	}
	return (strTemp);
}
