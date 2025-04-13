/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:32:26 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 16:58:47 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void	*ft_memmove(void *dest, void *src, int n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || n <= 0)
	{
		return (dest);
	}
	if (dest < src)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	if (dest > src)
	{
		d += n;
		s += n;
		while (n--)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
