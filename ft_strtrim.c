/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:30:08 by danielji          #+#    #+#             */
/*   Updated: 2025/04/17 17:50:42 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdio.h>

static int	is_char_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	end;
	char	*trimmed;

	start = 0;
	len = ft_strlen(s1);
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
	trimmed = ft_substr(s1, start, (end - start + 1));
	return (trimmed);
}

/* int	main(void)
{
	char s[] = "_ _ _ _h---ello_ - __";
	printf("  before: %s\n", s);
	printf("   after: %s\n", ft_strtrim(s, "_- "));
	printf("expected: %s\n", "h---ello");
}
 */