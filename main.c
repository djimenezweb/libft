#include "libft.h"

int	main(void)
{
	char str[] = "---------";
	printf("%s\n", str);
	ft_memset(str, '$', 10);
	printf("%s\n", str);
}