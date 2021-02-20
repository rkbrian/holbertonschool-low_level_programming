#include "holberton.h"

/**
 * _strncpy - function to copy a string
 * @dest: destination string
 * @src: source string
 * @n: src limitation
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	unsigned long i = 0, j;
	char *c = dest;

	for (j = 0 ; src[j] != '\0' ; j++)
	{
	}
	while (i < n && i <= j)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			break;
		}
	}
	return (c);
}
