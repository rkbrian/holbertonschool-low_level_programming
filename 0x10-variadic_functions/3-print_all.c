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
	char *str, ch;
	va_list everything;

	va_start(everything, format);

	if (format == NULL)
	{
		printf("(nil)");
	}
	switch(ch){
	case 'c': printf("char");
		break;
	case 'i': printf("int");
		break;
	case 'f': printf("float");
		break;
	case 's': printf("char*");
		break;
	default: i++;

	printf("%s", str);
	while (format[i] != '\0')
	{

		str = va_arg(everything, shwich(format[i]));
		if (str)
		{
			printf(", %s", str);
		}
		i++;
	}
	printf("\n");

	va_end(everything);
}

}
