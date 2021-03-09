#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - fuction to free malloc of dog_t
 * @d: typedef of a struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
