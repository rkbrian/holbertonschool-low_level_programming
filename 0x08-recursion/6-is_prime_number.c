#include "holberton.h"

/**
 * is_prime_number - function to find if input is a prime number
 * @n: input number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (primesearch(n, 2));
}

/**
 * primesearch - helper function
 * @suspr: suspected prime num
 * @pr: prime num to define suspr characteristics
 * Return: 0 or 1 to the main function
 */

int primesearch(int suspr, int pr)
{
	if (suspr < 2 || suspr % pr == 0)
	{
		return (0);
	}
	if ((suspr / 2) < pr)
	{
		return (1);
	}
	return (primesearch(suspr, (pr + 1)));
}
