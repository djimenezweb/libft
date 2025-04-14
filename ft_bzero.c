/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:08:34 by danielji          #+#    #+#             */
/*   Updated: 2025/04/14 15:11:59 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_char;

	s_char = s;
	while (n > 0)
	{
		*s_char = 0;
		s_char++;
		n--;
	}
}
