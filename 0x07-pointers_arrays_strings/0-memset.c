#include "holberton.h"

/**
 * _memset - function to fill memory w const byte
 * @s: char string
 * @b: const char
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char **p;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
		p = s[0][i];
	}
	return (p);
}
