#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - print sum of arguments
 * @argc: argument count
 * @argv: argument string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(i) != 0 || *argv[i] < '0')
		{
			printf("Error\n");
			return (1);
		}
		else if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			j = j + atoi(argv[i]);
		}
	}
	printf("%d\n", j);
	return (0);
}
