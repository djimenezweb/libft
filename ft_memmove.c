/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:32:26 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 20:39:33 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
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
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			d--;
			s--;
			*d = *s;
		}
	}
	return (dest);
}
