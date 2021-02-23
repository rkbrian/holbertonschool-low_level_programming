#include "holberton.h"

/**
 * _strchr - function to locate char in a string
 * @s: char string
 * @c: target char
 * Return: pointer to 1st occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j;
	char **p;

	p = &s;
	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			**p = p[i][j - i];
			break;
		}
	}
	if (i == j)
	{
		return NULL;
	}
	else
	{
		return (p);
	}
}
