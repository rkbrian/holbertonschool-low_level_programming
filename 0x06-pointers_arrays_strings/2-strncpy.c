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
	int i = 0;
	char *c = dest;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (c);
}
