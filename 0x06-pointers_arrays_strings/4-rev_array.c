#include "holberton.h"

/**
 * reverse_array - reverse array
 *
 * @a: arg char
 * @n: arg char
 *
 * Return: int to stdout
 */

void reverse_array(int *a, int n)
{

	int i, temp;

	i = 0;
	temp = 0;

	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
