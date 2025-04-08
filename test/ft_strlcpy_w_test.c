/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:44:18 by danielji          #+#    #+#             */
/*   Updated: 2025/04/07 15:44:23 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcpy() function copy strings.
strlcpy() takes the full size of the buffer (not just the length)
and guarantees to NUL-terminate the result (as long as size is larger
than 0. Note that a byte for the NUL should be included in size.
Also note that strlcpy() only operates on true “C” strings.
This means that for strlcpy() src must be NUL-terminated.

The strlcpy() function copies up to size - 1 characters from the NUL-termi‐
nated string src to dst, NUL-terminating the result.
*/

#include <stdio.h>

int	ft_strlcpy(char *dst, char *src, int size)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (i < (size - 1))
		{
			dst[i] = src[i];
		}
		i++;		
		dst[i] = '\0';
	}

	return (i);
}

int	main(void)
{
	int result;
	char dst[20] = "ABCDEFG";
	char src[] = "hijk";

	printf("   dst = %s\n", dst);

	result = ft_strlcpy(dst, src, 3);

	printf("result = %d\n", result);
	printf("   dst = %s\n", dst);
}
