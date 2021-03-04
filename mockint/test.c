#include <stdio.h>
#include <string.h>

int main()
{
	char a[20]="Holberton";
	char b[20]={'H','o','l','b','e','r','t','o','n','\0'};
	char c[19] = "Holberton";

	// using the %zu format specifier to print size_t
	printf("Length of string a = %zu \n",strlen(a));
	printf("Length of string b = %zu \n",strlen(b));
	printf("Size of c = %zu \n",sizeof(c));

	return 0;
}
