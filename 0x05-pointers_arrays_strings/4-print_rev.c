#include "holberton.h"

/**
 * print_rev - reverse alphabet using putchar only
 * Return: value 0
 */

void print_rev(char *s)
{
	char var = *s;
	int i = 0;

	while (i++)
	{
		var--;	
		s = &var;
	}
}
