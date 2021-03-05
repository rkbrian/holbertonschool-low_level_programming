#include "holberton.h"

/**
 * _strchr - function to locate char in a string
 * @s: char string
 * @c: target char
 * Return: pointer to 1st occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c || c == '\0')
		{
			return (s + j);
		}
	}
	return (NULL);
}
