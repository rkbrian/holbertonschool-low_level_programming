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
	char *str;
	char letar[4][2] = {
		{"c", 'char'},
		{"i", 'int'},
		{"f", 'float'},
		{"s", 'char*'},
	};
	va_list everything;

	va_start(everything, format);

	if (format == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
	while (format[i] != '\0')
	{

		while (letar[j][0] == format[i] && j < 4)
		{
			str = va_arg(everthing, letar[j][1]);
			if (str)
			{
				printf(", %s", str);
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(everthing);
}
