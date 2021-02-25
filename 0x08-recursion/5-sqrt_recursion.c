#include "holberton.h"

/**
 * _sqrt_recursion - function to return sq root of n w Newton method
 * @n: base num
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	int i = n / 2;

	if (i * i - n > 0)
	{
		return (_sqrt_recursion(i) / 2 + (i / _sqrt_recursion(i) / 2));
	}
	else if (i * i - n < 0 || n < 0)
	{
		return (-1);
	}
	else
	{
		return (i);
	}
}
