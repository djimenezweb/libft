/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:36:59 by danielji          #+#    #+#             */
/*   Updated: 2025/04/09 11:37:02 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strdup() function returns a pointer to a new string which is a
duplicate of the string STR.
Memory for the new string is obtained with malloc(), and can be freed with
free().
*/

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		len;
	char	*duplicate;

	while (*str)
	{
		len++;
	}
	duplicate = malloc(len);
	str -= len;
	while (str <= len)
	{
		*duplicate = *str;
		duplicate++;
		str++;
	}
}
