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
	int i = 0, j;
	char *c = dest;

	for (j = 0 ; src[j] != '\0' ; j++)
	{
	}
	while (i < n && i <= j)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
		if (*src == '\0')
		{
			break;
		}
	}
	return (c);
}