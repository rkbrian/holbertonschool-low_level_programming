#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: integer input
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
