#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - 2function description
*
* @argc: int of commandline args
*
* @argv: 2-d array of commandline args
*
* Return: 0 success, 98 for argc error, 100 if div 0
*/

int main(int argc, char **argv)
{


	if (argc == 4)
	{

		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}

	printf("Error\n");
	exit(98);
}
