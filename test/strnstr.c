#include <bsd/string.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *big = "FooBarBaz";
	char *little = "Baz";
	char *ptr;

	ptr = strnstr(big, little, 5);
	printf("%s", ptr);
}