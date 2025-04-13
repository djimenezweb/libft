/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:26:36 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 16:10:13 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

char	*ft_substr(char *s, unsigned int start, int len)
{
	unsigned int		i;
	char				*sub;

	i = 0;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
	{
		return (0);
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
