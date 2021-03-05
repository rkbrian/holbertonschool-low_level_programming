#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function reallocates a memory
 * @nmemb: element count
 * @size: type size in byte
 * Return: pointer or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newsp;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newsp = malloc(new_size);
	if (newsp == NULL)
	{
		return (NULL);
	}
	free(ptr);
	return (newsp);
}
