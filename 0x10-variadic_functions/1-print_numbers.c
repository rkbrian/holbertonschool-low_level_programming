#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers with new line
 * @separator: string to be printed between the numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list digit;

	va_start(digit, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(digit, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(digit);
}
