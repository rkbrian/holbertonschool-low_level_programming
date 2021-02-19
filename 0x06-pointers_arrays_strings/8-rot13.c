#include "holberton.h"

/**
 * rot13 - function to do rot13 encoding
 * @p: output string
 * Return: p
 */

char *rot13(char *p)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyz
ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char q[] = "nopqrstuvwxyzabcdefghijklm
NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; p[i] != 0 ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (p[i] == a[j])
			{
				p[i] = q[j];
			}
		}
	}
	return (p);
}
