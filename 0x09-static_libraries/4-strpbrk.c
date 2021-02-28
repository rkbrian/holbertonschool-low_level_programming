#include "holberton.h"

/**
 * _strpbrk - function to locate 1st appearence of accept
 * @s: char string
 * @accept: string with target char
 * Return: substring
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0 ; s[j] != '\0'; j++)
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (accept[i] == s[j])
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
