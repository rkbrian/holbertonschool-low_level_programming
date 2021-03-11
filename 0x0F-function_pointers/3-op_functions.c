#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum
 * @a: a
 * @b: b
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: a
 * @b: b
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: a
 * @b: b
 * Return: product
 */

int op_mul(int a, int b)
{
	int c = a * b;

	return (c);
}

/**
 * op_div - divide
 * @a: a
 * @b: b
 * Return: div
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: a
 * @b: b
 * Return: num
 */

int op_mod(int a, int b)
{
	return (a % b);
}
