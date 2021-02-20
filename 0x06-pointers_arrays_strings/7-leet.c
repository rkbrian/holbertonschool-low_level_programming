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
	char q[] = "4307143071";

	for (i = 0; p[i] != 0 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == a[j])
			{
				p[i] = q[j];
				break;
			}
		}
	}
	return (p);
}
