/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:53:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/14 15:17:34 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i_big;
	int	i_little;

	i_big = 0;
	if (little[0] == '\0')
	{
		return (big);
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
			return (&big[i_big]);
		i_big++;
	}
	return (0);
}
