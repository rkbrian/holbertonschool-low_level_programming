#include <stdlib.h>
#include <stdio.h>

/**
 * main - print product of 2 nums
 * @argc: 0 to 2
 * @argv: program string pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	long i = *argv[2] + '0', j = *argv[3] + '0';

	if (argc == 3)
	{
		printf("%ld\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
