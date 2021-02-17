#include "holberton.h"

/**
 * _puts - pointer to print a string
 * @str: string
 */

void _puts(char *str)
{
	char var = *str;
	str = &var;
}
