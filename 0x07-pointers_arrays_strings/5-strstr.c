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

	if (needle == NULL)
	{
		return (haystack);
	}
	if (*haystack == '\0')
	{
		return (NULL);
	}
	for (hal = 0; haystack[hal] != '\0'; hal++)
	{
	}
	for (nel = 0; needle[nel] != '\0'; nel++)
	{
	}
	for (i = 0; i < hal; i++)
	{
		for (j = 0; j < nel; j++)
		{
			if (haystack[i] != needle[j])
			{
				break;
			}
			else
			{
				i++;
			}
			if (j == nel - 1)
			{
				return (haystack + (i - nel));
			}
		}
	}
	return (NULL);
}
