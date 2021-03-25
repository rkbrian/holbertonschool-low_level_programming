#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to char string of 0 and 1
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	long int i, j = 0, bits, num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	i--;
	for (; i >= 0; i--, j++)
	{
		if (b[i] == '0')
		{
			bits = 0;
		}
		else
		{
			bits = 1;
		}
		num = num + (bits << j);
	}
	return (num);
}
