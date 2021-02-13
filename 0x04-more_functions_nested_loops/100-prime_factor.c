#include <stdio.h>

/**
 *main - find the largest prime factor
 *Return: value 0
 */

int main(void)
{
	unsigned long int pr, comp;

	comp = 612852475143;
	for (pr = 1 ; pr < comp ; pr++)
	{
		if (comp % pr == 0)
		{
			comp = comp / pr;
		}
	}
	printf("%lu\n", pr);
	return (0);
}
