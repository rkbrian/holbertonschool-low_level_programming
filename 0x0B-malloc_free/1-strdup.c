#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - ptr for a newly allocated space in memo w given str as parameter
 * @str: given string
 *Return: the pointer
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str =  NULL);
	{
		return (NULL);
	}
	for (i = 0; str[i] != 0; i++)
	{
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
