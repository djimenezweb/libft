/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:18:23 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 16:18:01 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* The memcpy() function copies n bytes from memory area src
to memory area dest. The memory areas must not overlap.
Returns a pointer to dest */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
	{
		return ((void *)0);
	}
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dest);
}
