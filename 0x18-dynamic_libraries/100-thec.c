#include <stdio.h>
#include <stdlib.h>

/**
 * add - sum
 * @a: a
 * @b: b
 * Return: sum
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract
 * @a: a
 * @b: b
 * Return: difference
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply
 * @a: a
 * @b: b
 * Return: product
 */

int mul(int a, int b)
{
	int c = a * b;

	return (c);
}

/**
 * div - divide
 * @a: a
 * @b: b
 * Return: div
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - modulo
 * @a: a
 * @b: b
 * Return: num
 */

int mod(int a, int b)
{
	return (a % b);
}
