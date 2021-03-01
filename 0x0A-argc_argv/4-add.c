#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - print sum of arguments
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j = 0, k;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k]; k++)
		{
			if (isdigit(argv[i][k]) == 0 || *argv[i] < 0)
			{
				printf("Error\n");
				return (1);
			}
			else if (argc == 1)
			{
				printf("0\n");
				return (1);
			}
		}
		j = j + atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
