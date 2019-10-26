#include "variadic_functions.h"

/**
 *  print_all - Prints anything
 *
 *  @format: List of args passed to function
 *
 *  Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;

	va_start(ap, format);

	char *str;
	unsigned int i = 0;
	int commaCheck = 0;

	while (format[i])
	{
		if (commaCheck)
			printf(", ");

		switch (format[i])
		{
		case 'c':
			printf("%c ", va_arg(ap, int));
			break;
		case 'i':
			printf("%i ", va_arg(ap, int));
			break;
		case 'f':
			printf("%f ", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str)
				printf("%s", str);
			break;
			printf("%p", str);
			break;
		default:
			commaCheck = 0;
			i++;
			continue;
		}

		commaCheck = 1;
			i++;
	}
	putchar('\n');
	va_end(ap);
}
