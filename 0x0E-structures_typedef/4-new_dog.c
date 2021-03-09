#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function to create new dog
 * @name: string
 * @age: number
 * @owner: string
 * Return: new dog or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *whoof;

	whoof = malloc(sizeof(struct dog));
	if (whoof == NULL)
	{
		return (NULL);
	}
	whoof->name = name;
	whoof->age = age;
	whoof->owner = owner;
	return (whoof);
}
