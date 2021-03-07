#include "holberton.h"

/**
 * _strstr - function to locate 1st appearence of accept
 * @haystack: string to be searched
 * @needle: target substring
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, hal, nel;

	for (hal = 0; haystack[hal] != '\0'; hal++)
	{
	}
	for (nel = 0; needle[nel] != '\0'; nel++)
	{
	}
	if (needle == NULL || nel == 0)
	{
		return (needle);
	}
	if (*haystack == '\0'|| nel > hal)
	{
		return (NULL);
	}
	for (i = 0; i <= hal; i++)
	{
		for (j = 0; j <= nel; j++)
		{
			if (haystack[i] == needle[j])
			{
				j++;
			}
			if (j == nel)
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
