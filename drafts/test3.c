#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	char *path = NULL;
	path = getcwd(NULL,0);
	puts(path);
	free(path);
	return 0;
}
