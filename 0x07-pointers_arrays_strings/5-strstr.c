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
	for (i = 0; i < sizeof(haystack) / sizeof(char); i++)
	{
		for (j = 0; j < sizeof(needle) / sizeof(char); j++)
		{
			if (haystack[i + j] == needle[j])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
