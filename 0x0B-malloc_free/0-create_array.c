#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - array of chars
 * @size: int size
 * @c: characters
 * Return: null for size 0 or pointer of array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
		if (p[i] == '\0')
		{
			return (NULL);
		}
	}
	return (p);
}
