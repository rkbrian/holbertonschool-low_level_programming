#include "holberton.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination string
 * @src: source string
 * @n: num of char to be replaced
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n & src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (s);
}
