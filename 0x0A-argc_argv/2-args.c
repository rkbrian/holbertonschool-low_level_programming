#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all arguments
 * @argc: to be void
 * @argv: program string pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
