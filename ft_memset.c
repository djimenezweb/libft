/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:36:50 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 16:44:42 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void	*ft_memset(void *s, int c, int n)
{
	unsigned char *s_char;

	s_char = s;
	while (n > 0)
	{
		*s_char = (unsigned char)c;
		s_char++;
		n--;
	}
	return (s);
}
