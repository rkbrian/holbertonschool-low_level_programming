#include "holberton.h"

/**
 * _atoi - pointer to convert a string to an int
 * @s: string
 * Return: if no num, return 0
 */

int _atoi(char *s)
{
	int p = 0, i, j, k = 1, l;

	for (i = 0, l = 0; (s[i] < '0' || s[i] > '9') ; i++, l++)
	{
		if (s[i] == '-')
		{
			k = -k;
		}
	}
	for (i = l, j = 0 ; s[i] >= '0' && s[i] <= '9' && s[i] != '\0'; i++)
	{
		j++;
	}
	if (j == 0)
	{
		p = 0;
	}
	for (; j > 0 ; j--, i--)
	{
		p = p + (s[i] + '0') * 10;
	}
	return (p * k);
}
