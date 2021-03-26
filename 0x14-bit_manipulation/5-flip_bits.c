#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - function to return the num of bits to flip to get from one num\
 to another
 * @n: number input
 * @index: starting from 0 of the bit to get
 * Return: 1 if succeed or -1 if failedthe num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, num = 0;

	i = n ^ m;
	while (i > 0)
	{
		i = i & (i - 1);
		num++;
	}
	return (num);
}
