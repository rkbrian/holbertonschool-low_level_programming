#include "holberton.h"

/**
 * _atoi - pointer to convert a string to an int
 * @s: string
 * Return: if no num, return 0
 */

int _atoi(char *s)
{
	int *tstr;
	int i, j = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
		tstr[j] = s[i];
		j++;
		}
		if (tstr[j] >= '0' && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}
	}
	while (i > 0 ; tstr != '\0')
	{
		i--;
		if (s[i] == '-')
		{
			tstr[j] = -tstr[j];
		}
	}
	if (tstr[j] == '\0')
	{
		return (0);
	}
	else
	{
		return (tstr);
	}
}
