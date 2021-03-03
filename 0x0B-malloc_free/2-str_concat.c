#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: concatenated strings or null
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *cats;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	cats = malloc((i + j + 1) * sizeof(char));
	if (cats == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		cats[k] = s1[k];
	}
	for (k = i; k < i + j; k++)
	{
		cats[k] = s2[k - i];
	}
	return (cats);
}
