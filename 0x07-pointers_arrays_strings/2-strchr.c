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

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (i == j)
	{
		return NULL;
	}
	else
	{
		return (&s[i]);
	}
}
