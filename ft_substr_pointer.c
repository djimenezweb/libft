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
	char				*cursor;

	i = 0;
	sub = malloc((len + 1) * sizeof(char));
	cursor = sub;
	if (!sub)
	{
		return (NULL);
	}
	while (*s && start > 0)
	{
		s++;
		start--;
	}
	while (*s && i < len)
	{
		*cursor = *s;
		cursor++;
		s++;
		i++;
	}
	*cursor = '\0';
	return (sub);
}

int	main (void)
{
	char *str = "Dinamarca";
	char *sub;

	sub = ft_substr(str, 5, 3);
	printf("str: %s\n", str);
	printf("sub: %s\n", sub);
}
