#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number input
 * @index: starting from 0 of the bit to get
 * Return: 1 if succeed or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
