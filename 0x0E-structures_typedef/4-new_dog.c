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
	who->name = malloc(sizeof(char) * i + 1);
	if (who->name == NULL)
	{
		free(who);
	}
	who->owner = malloc(sizeof(char) * j + 1);
	if (who->owner == NULL)
	{
		free(who);
		free(who->name);
	}
	who->age = age;
	for (k = 0; name[k] != '\0'; k++)
	{
		who->name[k] = name[k];
	}
	who->name[k] = '\0';
	for (l = 0; owner[l] != '\0'; l++)
	{
		who->owner[l] = owner[l];
	}
	who->owner[l] = '\0';
	return (who);
}
