#include <stdlib.h>
#include <time.h>
/* This code defines whether n is positive, negative or zero */

/**
 *main - whatever number is positive or negative
 *Return: value 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rBand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
}