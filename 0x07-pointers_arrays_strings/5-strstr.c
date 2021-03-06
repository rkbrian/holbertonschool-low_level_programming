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

	if (needle == NULL)
	{
		return (NULL);
	}
	for (j = 0; needle[j] != '\0'; j++)
	{
	}
	for (i = 0; haystack[i + j] != '\0';)
	{
		for (k = 0; k <= j;)
		{
			if (haystack[i + k] == needle[k])
			{
				k++;
			}
			else
			{
				k = 0;
				i++;
			}
		}
		if (k == j)
		{
			return (needle);
		}
	}
	return (NULL);
}
