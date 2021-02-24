#include "holberton.h"

/**
 * _pow_recursion - function to return x to the power of y
 * @x: base num
 * @y: exponent
 * Return: power product or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
