#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Create Opcode
 *
 * @argc: the number of args
 *
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{

	int i;

	/*  Correct # of args  */
	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}

	/*  Are bytes less than 0  */
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(1);
	}

	for (i = 0; i < atoi(argv[1]); i++)

	{
		printf("%02x", ((unsigned char *)main)[i]);

		if (i < atoi(argv[1]))
		{
			putchar(' ');
		}
	}
		       printf("\n");

	return (0);
}
