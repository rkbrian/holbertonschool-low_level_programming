#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * variadic_functions - prototypes for function pointers
 * sum_them_all - function to sum all the parameters
 * @n: number of elements in the number array
 * Return: value of sum or 0
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
