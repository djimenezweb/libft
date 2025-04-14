/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:36:59 by danielji          #+#    #+#             */
/*   Updated: 2025/04/14 10:38:34 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		len;
	char	*dest;
	char	*src;
	char	*ptr;

	len = ft_strlen(str);
	dest = malloc(len + 1);
	if (!dest)
	{
		return ((void *)0);
	}
	src = str;
	ptr = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
