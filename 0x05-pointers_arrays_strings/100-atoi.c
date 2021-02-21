#include "holberton.h"

/**
 * _atoi - pointer to convert a string to an int
 * @s: string
 * Return: if no num, return 0
 */

int _atoi(char *s)
{
	int p, i, j = 0, k = 1;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '-')
		{
			k = -k;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			j++;
		}
		if (j > 0 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}
	}
	if (j == 0)
	{
		p = '0';
	}
	else
	{
		p = s[i] + '0';
	}
	i--;
	for (; j >= 0 ; j--, i--)
	{
		p = p + s[i] * 10;
	}
		return (p * k);
}
