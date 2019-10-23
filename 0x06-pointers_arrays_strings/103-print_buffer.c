#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 *
 * @b: char pointer
 *
 * @size: int
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{

	int i, j, bytes;

	bytes = 0;

	for (i = 0; i < size;)
	{
		printf("000000%02x\n", i);

		if (i >= size)
		{
			printf(" ");
		}
		else
		{
			printf("%02x", *(b + i));
		}
		if (i % 2 != 0)
		{
			printf(" ");
		}
		i++;
		bytes++;
	}

	j = 0;
	j -= 10;
	bytes = 0;

	while (bytes < 10 && j < size)
	{

		if (b[j] >= 32 && b[j] <= 126) {
			printf("%c", b[j]);
		}
		else
		{
			printf("%c", '.' );
		}

		j += 10;

		if (i < size)
		{
			printf("\n");
		}
	}
	printf("\n");
}
