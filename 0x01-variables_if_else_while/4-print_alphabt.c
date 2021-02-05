#include <stdio.h>
#include <string.h>

/**
 *main - alphabet using putchar only and no q or e
 *Return: value 0
 */

int main(void)
{
	char lttr;

	for (lttr = 'a' ; lttr <= 'z' ; lttr++)
	{
		if (lttr == 'q' || lttr == 'e')
			continue;
		else
			putchar(lttr);

	}
	putchar('\n');

	return (0);
}
