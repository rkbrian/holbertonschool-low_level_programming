#include "holberton.h"

/**
 * factorial - function to return factorial
 * @n: given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial (n - 1));
	}
}
