#include "holberton.h"

/**
 * _strstr - function to locate 1st appearence of accept
 * @haystack: string to be searched
 * @needle: target substring
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (needle == NULL)
	{
		return (NULL);
	}
	for (j = 0; needle[j] != '\0'; j++)
	{
	}
	for (i = 0; haystack[i + j] != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			return (needle);
		}
	}
	return (NULL);
}
