#include "holberton.h"

/**
 * _memset - function to fill memory w const byte
 * @s: char string
 * @b: const char
 * @n: first num of char to be replaced
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
