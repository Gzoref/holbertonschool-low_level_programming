#include "variadic_functions.h"

/**
 *  print_strings - Print strings
 *
 *  @seperator: String beetween numbers
 *
 *  @n: Number of args
 *
 *  Return return type
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *args;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(ap, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(ap);
}
