/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:43:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:25:53 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strncmp() function compares only the first (at most) n bytes of the two
strings s1 and s2 the two strings s1 and s2.
The comparison is done using unsigned characters.

Returns an integer indicating the result of the comparison, as follows:
•  0, if the s1 and s2 are equal;
•  a negative value if s1 is less than s2;
•  a positive value if s1 is greater than s2.

Returns an integer less than, equal to, or greater than zero if s1 (or the
first n bytes thereof) is found, respectively, to be less than, to match,
or be greater than s2. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && (s1[i] && s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
