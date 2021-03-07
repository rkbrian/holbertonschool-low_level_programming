#include "holberton.h"

/**
 * _strstr - function to locate 1st appearence of accept
 * @haystack: string to be searched
 * @needle: target substring
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, hl, nl;

	if (needle == NULL)
	{
		return (NULL);
	}
	else if (*haystack == *needle)
	{
		return (needle);
	}
	hl = sizeof(haystack) / sizeof(char);
	nl = sizeof(needle) / sizeof(char);
	while (i < (hl - nl) && j < nl)
	{
		if (haystack[i + j] != needle[j])
		{
			i++;
			j = 0;
		}
		else
		{
			j++;
		}
	}
	if (j == nl - 1)
	{
		return (needle);
	}
	return (NULL);
}
