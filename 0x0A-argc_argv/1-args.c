#include <stdio.h>

/**
 * main -  Number of arguments passed into it.b
 *
 * @argc: size of argv array and number of command line arguments
 *
 * @argv: An array of size argc
 *
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
