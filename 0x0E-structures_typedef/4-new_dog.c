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
	dog_t *who;
	char *namp, *ownp;
	float *agep;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	who = malloc(sizeof(struct dog) *);
	if (who == NULL)
	{
		return (NULL);
	}
	namp = malloc(sizeof(char) * i);
	agep = malloc(sizeof(float));
	ownp = malloc(sizeof(char) * j);
	*namp = *name;
	*agep = *age;
	*ownp = *owner;
	who->name = namp;
	who->age = agep;
	who->owner = ownp;
	return (whoof);
}
