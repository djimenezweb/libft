/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:05:18 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 17:11:55 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_strlcat(char *dst, char *src, int size)
{
	int	i_dst;
	int	i_src;
	int length;

	i_dst = 0;
	i_src = 0;
	length = ft_strlen(dst);
	while ((i_dst < size) && dst[i_dst])
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
	if (length < size)
	{
		dst[i_dst + i_src] = '\0';
	}
	while (src[i_src])
	{
		i_src++;
	}
	return (length + i_src);
}
