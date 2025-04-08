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

int	ft_strlcat(char *dst, char *src, int size)
{
	int	i_dst;
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
