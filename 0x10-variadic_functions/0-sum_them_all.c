#include "variadic_functions.h"

/**
 *  sum_them_all - Sum all params
 *
 *  @n: const unsigned int
 *
 *  Return int sum
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;

	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);

}
