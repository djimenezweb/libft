#include <bsd/string.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *big = "Foo Bar Baz";
	char *little = "Bar";
	char *ptr;

	ptr = strnstr(big, little, 4);
	printf("%s", ptr);
}