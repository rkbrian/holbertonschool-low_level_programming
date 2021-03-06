#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: string 2 limitation of bytes
 * Return: cat string or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k;
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
	cats = malloc((i + n + 1) * sizeof(char));
	if (cats == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		cats[k] = s1[k];
	}
	for (k = i; k < (n + i) && s2[k - i] != '\0'; k++)
	{
		cats[k] = s2[k - i];
	}
	cats[k] = '\0';
	return (cats);
}
