#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: integer input
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	if (s == NULL)
	{
		return (NULL);
	}
	s = malloc(b);
	return (s);
	free(s);
}
