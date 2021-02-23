#include "holberton.h"

/**
 * strpbrk - function to locate 1st appearence of accept
 * @s: char string
 * @accept: string with target char
 * Return: bytes before hitting the new char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0 ; s[j] != '\0'; j++)
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (s[j] == accept[i])
			{
				break;
			}
		}
		break;
	}
	return (&s[i]);
}
