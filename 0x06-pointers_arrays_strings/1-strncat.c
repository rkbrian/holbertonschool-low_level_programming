#include "holberton.h"

/**
 * _strncat - function to concatenate 2 strings
 * @dest: destination string
 * @src: source string
 * @n: source string limitation
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0; j < n ; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
