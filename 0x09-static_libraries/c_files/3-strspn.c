#include "holberton.h"

/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: char pointer
 *
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count1, count2;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
			{
				break;
			}
		}
			if (!(accept[count2]))
			{
				break;
			}
	}
	return (count1);
}
