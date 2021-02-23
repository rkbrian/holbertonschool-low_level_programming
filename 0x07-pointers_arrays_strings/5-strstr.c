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
		for (k = 0; k <= j; k++)
		{
			if (haystack[i] != s[j])
		{
			break;
		}
	}
		if (s[j] == accept[i])
		{
			break;
		}
	}
	if (s[j] == '\0')
	{
		return (NULL);
	}
	else
	{
		return (&s[j]);
	}
}
