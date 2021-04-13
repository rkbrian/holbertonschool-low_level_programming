#include <stdio.h>
#include <string.h>

void main()
{
	char *allpath = strcat("/usr", "/bin/env");

	printf("%s\n", allpath);
}
