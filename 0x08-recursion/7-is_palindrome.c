#include "holberton.h"

/**
 * is_palindrome - function to return string is palindrome
 * @s: input string
 * Return: 1 for yes 0 for no
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (charcomp(s, 0, rev_str(s) - 1));
}

/**
 * rev_str - function to return string is palindrome
 * @s: input string
 * Return: 1 for yes 0 for no
 */

int rev_str(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (rev_str(s + 1) + 1);
}

/**
 * charcomp - function to compare palindrome and its reverse version
 * @s: input string
 * @i: forward count
 * @j: backward count
 * Return: 1 for yes 0 for no
 */

int charcomp(char *s, int i, int j)
{
	if (s[i] != s[j])
	{
		return (0);
	}
	if (j == 0)
	{
		return (1);
	}
	return (charcomp(s, i + 1, j - 1));
}
