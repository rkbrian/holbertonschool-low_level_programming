#include <stdio.h>

/**
 *main - find the largest prime factor
 *Return: value 0
 */

int main(void)
{
	unsigned long int pr, comp;

	comp = 125;
	for (pr = 2 ; pr < comp ; pr++)
	{
		while (comp % pr == 0)
		{
			comp = comp / pr;
		}
	}
	printf("%lu\n", comp);
	return (0);
}
