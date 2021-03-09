#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print struct dog
 * @d: function
 */

void print_dog(struct dog *d)
{
	if (dog.name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", dog.name);
	}
	printf("Age: %.6f\n", dog.age);
	printf("Owner: %s\n", dog.owner);
}
