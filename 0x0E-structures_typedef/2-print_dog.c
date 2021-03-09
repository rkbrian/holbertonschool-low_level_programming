#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print struct dog
 * @d: function
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
