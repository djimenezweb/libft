/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:05:18 by danielji          #+#    #+#             */
/*   Updated: 2025/04/14 15:14:26 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stddef.h>

int	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	unsigned int	dst_i;
	unsigned int	src_i;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dsize <= dst_len)
	{
		return (dsize + src_len);
	}
	dst_i = dst_len;
	src_i = 0;
	while (src[src_i] && (dst_i + src_i < dsize - 1))
	{
		dst[dst_i + src_i] = src[src_i];
		src_i++;
	}
	dst[dst_i + src_i] = '\0';
	return (dst_len + src_len);
}
