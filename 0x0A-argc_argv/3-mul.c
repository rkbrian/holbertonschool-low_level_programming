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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
