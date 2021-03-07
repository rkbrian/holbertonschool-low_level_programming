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
	int i, j, arlen;

	if (src == NULL)
	{
		return (NULL);
	}
	for (arlen = 0; src[arlen] != '\0'; arlen++)
	{
	}
	for (i = 0, j = 0; i < n && j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
	}
	return (dest);
}
