#include "holberton.h"

/**
 * _atoi - pointer to convert a string to an int
 * @s: string
 * Return: if no num, return 0
 */

int _atoi(char *s)
{
	unsigned int *tstr, *p = tstr;
	int i;

	for (i = 0 ; *s != '\0' ; i++, s++)
	{
		if (*s >= '0' && *s <= '9')
		{
			*tstr = *s;
			tstr++;
		}
		if (*tstr >= '0' && (*s < '0' || *s > '9'))
		{
			break;
		}
	}
	for (; i > 0 ; i--, s--)
	{
		if (*s == '-')
		{
			*tstr = -*tstr;
		}
	}
	if (*tstr = NULL)
	{
		return (0);
	}
	else
	{
		return (p);
	}
}
