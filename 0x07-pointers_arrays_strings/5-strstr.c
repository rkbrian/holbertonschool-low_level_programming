#include "holberton.h"

/**
 * _strstr - function to locate 1st appearence of accept
 * @haystack: string to be searched
 * @needle: target substring
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (j = 0; needle[j] != '\0'; j++)
	{
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; k <= j && haystack[i + k] != '\0'; k++)
		{
			if (haystack[i + k] != needle[k])
			{
				break;
			}
		}
		if (k == j && haystack[i + k] == needle[j])
		{
			break;
		}
	}
	if (haystack[i] == '\0')
	{
		return (NULL);
	}
	else
	{
		return (needle);
	}
}
