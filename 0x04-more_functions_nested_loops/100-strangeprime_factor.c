#include <stdio.h>

/**
 *main - find the largest prime factor
 *Return: value 0
 */

int main(void)
{
	unsigned long int pra;
	unsigned long int prb;

	pra = 612852475143;
	for (prb = 1 ; prb < pra ; prb++)
	{
		if ((pra % prb) == 0)
		{
			pra = pra / prb;
		}
	}
	printf("%lu\n", pra);
	return (0);
}
