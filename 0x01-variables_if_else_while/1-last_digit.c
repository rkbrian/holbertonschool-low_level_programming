#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints the last digit of number generated
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastd;

	lastd = n % 10;
	if (lastd > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
		else if (lastd == 0)
			printf("Last digit of %d is %d", n, lastd);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0", n, lastd);

			return (0);
}
