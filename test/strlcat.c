#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	int result;
	char dst[20] = "ABCDEFGH";
	char src[] = "fghi";

	printf("   dst = %s\n", dst);

	result = strlcat(dst, src, 14);

	printf("result = %d\n", result);
	printf("   dst = %s\n", dst);
}
