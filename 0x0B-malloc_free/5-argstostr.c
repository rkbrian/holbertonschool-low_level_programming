#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - function to cat arguments
 * @ac: argument string count
 * @av: double string pointer for argument
 * Return: ptr to new string or null
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, sublen = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		sublen = sublen + _strlen(av[i]);
	}
	s = malloc(sizeof(char) * sublen + 1);
	if (s == NULL)
	{
		return (NULL);
		free(s);
	}
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			s[k] = av[i][j];
		}
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}

/**
 * _strlen - function to find string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
	}
	return (n);
}
