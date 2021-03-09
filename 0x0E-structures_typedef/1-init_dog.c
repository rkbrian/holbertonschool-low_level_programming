#include "dog.h"

/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: function
 * @name: string
 * @age: number
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
