#include "holberton.h"

/**
 * leet - function to replace certain letters with num
 * @p: output string or array
 * Return: p
 */

char *leet(char *p)
{
	int i, j;
	char a[] = "aeotlAEOTL";
	char q[] = "43071";

	for (i = 0; p[i] != 0 ; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (p[i] == a[j] || p[i] == a[j + 5])
			{
				p[j] = q[j];
			}
		}
	}
	return (p);
}
