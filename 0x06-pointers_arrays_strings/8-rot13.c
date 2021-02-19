#include <stdio.h>
#include <string.h>

/**
 * rot13 - function to do rot13 encoding
 * @p: output string
 * Return: p
 */

char *rot13(char *p)
{
	int i;

		for (i = 0; ((p[i] >= 97 && p[i] <= 122) || (p[i] >= 65 && p[i] <= 90)) ; i++)
		{
			if ((p[i] >= 97 && p[i] <= 109) || (p[i] >= 65 && p[i] <= 77))
			{
				p[i] = p[i] + 13;
			}
			else
			{
				p[i] = p[i] - 13;
			}
		}
	return (p);
}
