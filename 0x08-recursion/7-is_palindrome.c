#include "holberton.h"

/**
 * is_palindrome - function to return string is palindrome
 * @s: input string
 * Return: 1 for yes 0 for no
 */

int is_palindrome(char *s)
{
	if(is_palindrome(s + 1) == is_palindrome(s))
	{
		return (is_palindrome(s + 1) - is_palindrome(s))
	}
	if (*s == '\0')
	{
		return (-1);
	}
