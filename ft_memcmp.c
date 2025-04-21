/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:20:14 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 16:47:54 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcmp() function compares the first n bytes (each interpreted
as unsigned char) of the memory areas s1 and s2.

Returns an integer less than, equal to, or greater than zero if the 
first n bytes of s1 is found, respectively, to be less than, to match,
or be greater than the first n bytes of s2.

For a nonzero return value, the sign is determined by the sign of the
difference between the first pair of bytes (interpreted as unsigned char)
that differ in s1 and s2.
If n is zero, the return value is zero. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*cs1 != *cs2)
		{
			return (*cs1 - *cs2);
		}
		cs1++;
		cs2++;
		n--;
	}
	return (0);
}
