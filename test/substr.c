#include <bsd/string.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *str = "Dinamarca";
	char *sub;

	sub = substr(*str, 4, 3);
	printf("%s", sub);
}