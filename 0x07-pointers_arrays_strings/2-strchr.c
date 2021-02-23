#include "holberton.h"

/**
 * _strchr - function to locate char in a string
 * @s: char string
 * @c: target char
 * Return: pointer to 1st occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j, k;

	for (j = 0, k = 1; s[j] != '\0'; j++, k++)
	{
		if (s[j] == '\0' && s[k] != '\0')
		{
			j++;
		}
	}
	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (i == j || (s[i] == '0' && i < j))
	{
		return (NULL);
	}
	else
	{
		return (&s[i]);
	}
}
