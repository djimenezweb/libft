/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:30:08 by danielji          #+#    #+#             */
/*   Updated: 2025/04/18 10:58:49 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* We check if (start > end) if the input is completely made of characters
from set. In that case start can become greater than end */

#include "libft.h"

static int	is_char_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start])
	{
		if (is_char_in_set(s1[start], set))
			start++;
		else
			break ;
	}
	while (end > 0)
	{
		if (is_char_in_set(s1[end], set))
			end--;
		else
			break ;
	}
	if (start > end)
		return (ft_strdup(""));
	trimmed = ft_substr(s1, start, (end - start + 1));
	return (trimmed);
}
