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
	float *mage;
	int i, j, k, l;

	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	who = malloc(sizeof(struct dog));
	if (who == NULL)
	{
		return (NULL);
	}
	namp = malloc(sizeof(char) * i + 1);
	ownp = malloc(sizeof(char) * j + 1);
	mage = malloc(sizeof(float) + 1);
	*mage = age;
	for (k = 0; name[k] != '\0'; k++)
	{
		namp[k] = name[k];
	}
	namp[k] = '\0';
	for (l = 0; owner[l] != '\0'; l++)
	{
		ownp[l] = owner[l];
	}
	ownp[l] = '\0';
	who->name = namp;
	who->age = *mage;
	who->owner = ownp;
	return (who);
}
