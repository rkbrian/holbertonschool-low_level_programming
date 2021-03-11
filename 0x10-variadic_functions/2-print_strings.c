#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function to print strings with new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strptr;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		strptr = va_arg(strings, char*);
		if (strptr != NULL)
		{
			printf("%s", strptr);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}
