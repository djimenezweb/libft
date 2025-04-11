/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:26:36 by danielji          #+#    #+#             */
/*   Updated: 2025/04/10 11:26:42 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, unsigned int len)
{
	unsigned int		i;
	char				*sub;

	i = 0;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
	{
		return (NULL);
	}
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	main (void)
{
	char *str = "Dinamarca";
	char *sub;

	sub = ft_substr(str, 0, 3);
	printf("str: %s\n", str);
	printf("sub: %s\n", sub);
}
