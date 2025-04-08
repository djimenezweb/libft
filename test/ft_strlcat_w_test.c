/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:05:18 by danielji          #+#    #+#             */
/*   Updated: 2025/04/07 16:05:23 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcat() function concatenate strings.
strlcat() takes the full size of the buffer (not just the length)
and guarantees to NUL-terminate the result (as long as size is larger
than 0. Note that a byte for the NUL should be included in size.
Also note that strlcat() only operates on true “C” strings.
This means that for strlcat() both src and dst must be NUL-terminated.

The strlcat() function appends the NUL-terminated string src to the end of
dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating
the result.

The strlcat() function returns the total length of the string it tried
to create. That means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation
detection simple.
*/

#include <stdio.h>

int	ft_strlcat(char *dst, char *src, int size)
{
	int i_dst;
	int	i_src;

	i_dst = 0;
	i_src = 0;

	while (dst[i_dst])
	{
		i_dst++;
	}
	while (src[i_src])
	{
		if (i_dst + i_src < (size - 1))
		{
			dst[i_dst + i_src] = src[i_src];
		}
		i_src++;
	}
	return (i_dst + i_src);
}

int	main(void)
{
	int result;
	char dst[20] = "ABCDEFGH";
	char src[] = "fghi";

	printf("   dst = %s\n", dst);

	result = ft_strlcat(dst, src, 14);

	printf("result = %d\n", result);
	printf("   dst = %s\n", dst);
}


