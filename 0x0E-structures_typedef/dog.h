#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - new type of structure
 * @name: name string
 * @age: numbers
 * @owner: owner string
 */

typedef struct dog dog_t;
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new name of struct dog
 */

#endif
