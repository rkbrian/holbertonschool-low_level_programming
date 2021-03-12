#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function to print anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *typex, *separator;
	va_list everything;

	va_start(everything, format);

	separator = "";
	while (format && format[i])
	{
		if (i > 0)
		{
			separator = ", ";
		}
 		switch (format[i])
		{
		case 'c': printf("%s%c", separator, va_arg(everything, int));
			break;
		case 'i': printf("%s%d", separator, va_arg(everything, int));
			break;
		case 'f': printf("%s%f", separator, va_arg(everything, double));
			break;
		case 's': typex = va_arg(everything, char*);
			if (typex == NULL)
			{
				printf("%s(nil)", separator);
				break;
			}
			printf("%s%s", separator, typex);
			break;

		}
		i++;
	}
	printf("\n");

	va_end(everything);
}
