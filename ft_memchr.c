/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:55:10 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 17:24:41 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void	*ft_memchr(void *s, int c, int n)
{
	unsigned char	*cs;
	unsigned char	cc;

	cs = (unsigned char *)s;
	cc = (unsigned char)c;
	while (n--)
	{
		if (*cs == cc)
		{
			return (cs);
		}
		cs++;
	}
	return ((void*)0);
}
