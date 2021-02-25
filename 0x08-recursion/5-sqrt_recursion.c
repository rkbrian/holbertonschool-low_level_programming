#include "holberton.h"

/**
 * _sqrt_recursion - main function to return sq root of n w Newton method
 * @n: base num
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	return (sqrcalc(n, 0));
}

/**
 * sqrcalc- helper function to return sq root of n w Newton method
 * @n: base num
 * @i: suspected sq root
 * Return: sqrt or -1
 */

int sqrcalc(int n, int i)
{
	if (i * i - n == 0)
	{
		return (i);
	}
	if (i * i - n > 0 || n < 0)
	{
		return (-1);
	}
	return (sqrcalc(n, i + 1));
}
