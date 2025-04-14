/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:36:50 by danielji          #+#    #+#             */
/*   Updated: 2025/04/14 15:11:35 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_char;

	s_char = s;
	while (n > 0)
	{
		*s_char = (unsigned char)c;
		s_char++;
		n--;
	}
	return (s);
}
