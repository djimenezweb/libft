#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	int result;
	char dst[20] = "ABCDEFG";
	char src[] = "hijk";

	printf("   dst = %s\n", dst);

	result = strlcpy(dst, src, 3);

	printf("result = %d\n", result);
	printf("   dst = %s\n", dst);
}
