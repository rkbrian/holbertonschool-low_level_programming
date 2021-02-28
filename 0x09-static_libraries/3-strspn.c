#include "holberton.h"

/**
 * _strspn - function to find length of prefix substring
 * @s: char string
 * @accept:string with target char
 * Return: bytes before hitting the new char
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;


	for (j = 0 ; s[j] != '\0' && s[j] != ' '; j++)
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (s[j] == accept[i])
			{
				k++;
			}
		}
	}
	return (k);
}
