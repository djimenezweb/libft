/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:30:08 by danielji          #+#    #+#             */
/*   Updated: 2025/04/16 16:04:43 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	j;
	char	*trimmed;

	start = 0;
	end = ft_strlen((char *)s1);
	i = 0;
	while (s1[start] == *set)
	{
		start++;
	}
	trimmed = malloc(end - start + 2);
	if (!trimmed)
	{
		return ((void *)0);
	}
	end--;
	while (s1[end] == *set)
	{
		end--;
	}
	while (start <= end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

/* int	main(void)
{
	printf("result: %s\n", ft_strtrim("_______hello_______", "_"));
} */