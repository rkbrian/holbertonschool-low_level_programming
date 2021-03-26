#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - function to return the num of bits to flip to get from one num\
 to another
 * @n: 1st number input
 * @m: 2nd number input
 * Return: the num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num = 0;

	i = n ^ m;
	if (i == 0)
	{
		return (0);
	}
	while (i > 0)
	{
		i = i & (i - 1);
		num++;
	}
	return (num);
}
