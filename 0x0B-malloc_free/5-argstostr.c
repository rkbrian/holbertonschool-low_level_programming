#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - function to cat arguments
 * @ac: argument string count
 * @av: double string pointer for argument
 * Return: av
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	*av = (int *)malloc(argc - 1);
	for (ac = 0; ac < argc - 1; ac++)
	{
		*av = argv[ac] + '\n';
	}
	if (av == NULL)
	{
		return (NULL);
	}
	return ();
}

brainiac
