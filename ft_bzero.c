/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:08:34 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 16:16:33 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* The bzero() function erases the data in the n bytes of the memory starting
at the location pointed to by s, by writing zeros (bytes containing '\0')
to that area. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_char;

	s_char = (unsigned char *)s;
	while (n > 0)
	{
		*s_char = '\0';
		s_char++;
		n--;
	}
}
