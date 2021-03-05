#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/**
 * prototypes for more malloc and free
 */

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif

/* #include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/