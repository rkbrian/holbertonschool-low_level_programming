#include "holberton.h"
#include <stdlib.h>

/**
 * free_dog - fuction to free malloc of ptr to a 2d array
 * @d: typedef of a struct
 */

void free_dog(dog_t *d)
{
	free(name);
	free(owner);
	if (d != NULL)
	{
		free(d);
	}
}
