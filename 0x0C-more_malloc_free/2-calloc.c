#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: element count
 * @size: type size in byte
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	for (i = 0; i < nmemb; i++)
	{
		s[i] = ""; /* memory set to zero? */
	}
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
