#include <stdio.h>
#include <string.h>

/**
 * rot13 - function to do rot13 encoding
 * @p: output string
 * Return: p
 */

char *rot13(char *p)
{
	int i = 0, j = 0;
	char *q, *r;

	for (; p[i] != 0 ; i++)
	{
			q[i] = p[i] - 13;
			r[i] = p[i] + 13;
		if ((p[i] >= 97 && p[i] <= 122) || (p[i] >= 65 && p[i] <= 90))
		{


		}
	}
	for (; j <= i ; j++)
	{
		p[j] = q[j];
		p[j] = q[j];
		q[j] = p[j];
	}
	return (p);
}
