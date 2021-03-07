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

	if (src == NULL)
	{
		return (NULL);
	}
	while (i < n && dest[i] != '\0' && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
