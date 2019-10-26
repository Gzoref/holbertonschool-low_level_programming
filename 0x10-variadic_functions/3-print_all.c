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

	char *str, *comma = "";
	int i = 0;

	while (format[i])
	{
		if (format[i + 1])
			comma = ", ";

		switch (format[i])
		{
		case 'c':
			printf("%c%s ", va_arg(ap, int), comma);
			i++;
			break;
		case 'i':
			printf("%i%s ", va_arg(ap, int), comma);
			i++;
			break;
		case 'f':
			printf("%f%s ", va_arg(ap, double), comma);
			i++;
			break;
		case 's':
			str = va_arg(ap, char*);
			if (!str)
				printf("nil");
			else
				printf("%s%s", str, comma);
			i++;
		default:
			break;
			if (format[i])
				printf(", "); }
	}
	putchar('\n');
	va_end(ap);
}