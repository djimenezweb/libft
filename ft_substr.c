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

char	*ft_substr(char *s, unsigned int start, int len)
{
	char	*sub;

	sub = malloc(len * sizeof(char));
	while (*s && start > 0)
	{
		s++;
		start--;
	}
	while (*s && len > 0)
	{
		*sub = *s;
		sub++;
		s++;
		len--;
	}
	*sub = '\0';
	// free(sub);
	return (sub);
}

int	main (void)
{
	char *str = "Dinamarca";
	char *sub;

	sub = ft_substr(str, 4, 3);
	printf("sub: %s\n", sub);
}
