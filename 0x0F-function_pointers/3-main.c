#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function to calc
 * @argc: argument count
 * @argv: argument strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*optr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	optr = (*get_op_func)(argv[2]);
	if (!optr)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", optr(a, b));
	return (0);
}
