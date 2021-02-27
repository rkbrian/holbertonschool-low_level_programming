#include "holberton.h"

/**
 * wildcmp - main function to compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 for or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	return (_maniac(s1, s2, 0, j, 42));
}

/**
 * _str_comp - function to compare substrings fwd and bwd
 * @s1: string 1
 * @s2: string 2
 * @i: forward count
 * @j: backward count
 * Return: 1 for yes 0 for no
 */

int _str_comp(char *s1, char *s2, int i, int j)
{
	if (s1[i] == s2[i] && s[j] == s2[j])
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (_str_comp(s1, s2, i + 1, j - 1));
}

/**
 * _maniac - function to find special char
 * @s1: string 1
 * @s2: string 2
 * @i: forward count
 * @j: backward count
 * @w: special char
 * Return: 1 for or 0
 */
int _maniac(char *s1, char *s2, int i, int j, char w)
{
	if ((s1[i] == w && s1[j] == w) || (s2[i] == w && s2[j] == w))
	{
		return (1);
	}
	return (_str_comp(s1, s2, i, j, w));
}
