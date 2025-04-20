/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:36:59 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:01:27 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* The strdup() function returns a pointer to a new string which is a
duplicate of the string s. Memory for the new string is obtained with
malloc(3), and can be freed with free(3).

On success, the strdup() function returns a pointer to the duplicated
string. It returns NULL if insufficient memory was available, with
errno set to indicate the error. */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = malloc(ft_strlen(str) + 1);
	if (!dup)
	{
		return ((void *)0);
	}
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
