/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:53:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 16:50:27 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function locates the first occurrence of the null-terminated
string little in the string big, where not more than len characters are
searched. Characters that appear after a ‘\0’ character are not searched.

Returns a pointer to the first character of the first occurrence of
little is returned. 
If little is an empty string, big is returned.
If little occurs nowhere in big, NULL is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_big;
	size_t	i_little;

	i_big = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i_big] && i_big <= len - 1)
	{
		i_little = 0;
		while (big[i_big + i_little] == little[i_little]
			&& i_big + i_little < len && little[i_little])
		{
			i_little++;
		}
		if (little[i_little] == '\0')
			return ((char *)&big[i_big]);
		i_big++;
	}
	return ((void *)0);
}
