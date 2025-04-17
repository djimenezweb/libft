/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:36:50 by danielji          #+#    #+#             */
/*   Updated: 2025/04/17 16:23:04 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdio.h>
#include "string.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_char;

	s_char = s;
	while (s_char && n > 0)
	{
		*s_char = (unsigned char)c;
		s_char++;
		n--;
	}
	return (s);
}

int	main(void)
{
	char s[] = "goodbye";
	printf("%s\n", s);
	ft_memset(s, 'a', 3);
	printf("%s\n", s);
	return (0);
}
