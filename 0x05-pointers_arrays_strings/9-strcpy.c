#include "holberton.h"

/**
 * _strcpy - pointer to copy a string
 * @dest: destination string
 * @src: source string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char c;
	int i = 0;

	c = *src;
	*dest = c;
	while (i <= 98)
	{
		_putchar(dest[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
