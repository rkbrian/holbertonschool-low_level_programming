#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function to print anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *strmem, *separator = "";
	va_list everything;

	va_start(everything, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(everything, int));
			j++;
			break;
		case 'i':
			printf("%s%d", separator, va_arg(everything, int));
			j++;
			break;
		case 'f':
			printf("%s%f", separator, va_arg(everything, double));
			j++;
			break;
		case 's':
			strmem = va_arg(everything, char*);
			if (strmem == NULL)
			{
				printf("%s(nil)", separator);
				j++;
				break;
			}
			printf("%s%s", separator, strmem);
			j++;
			break;
		}
		i++;
		if (j > 0)
			separator = ", ";
	}
	printf("\n");
	va_end(everything);
}
