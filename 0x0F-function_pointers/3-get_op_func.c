#include "3-calc.h"

/**
* get_op_func - Selects the correct function to perform the operation
*
* @s: char pointer
*
* Return: int
*/

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {

		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	/*  While ops array & struct op is not NULL and ops vs s isn't equal */

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s))
		{
			i++;
		}
			else
			{
				return (ops[i].f);
			}
	}

	printf("Error\n");
	exit(99);
}
