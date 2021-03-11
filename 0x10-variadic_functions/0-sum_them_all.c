#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all the parameters
 * @n: number of elements in the number array
 * Return: value of sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numarr;
	unsigned int i, sum = 0;

	va_start(numarr, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(numarr, unsigned int);
	}

	va_end(numarr);

	return (sum);
}
