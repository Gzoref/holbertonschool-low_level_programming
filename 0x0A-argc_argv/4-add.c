#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: size of argv array and number of command line arguments
 *
 * @argv: An array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");

	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		for (j = 0; argv[i][j] != '\0'; j++) /*argv is a 2-d array*/
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");

				return (0);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
