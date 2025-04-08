/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:44:18 by danielji          #+#    #+#             */
/*   Updated: 2025/04/07 15:44:23 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, char *src, int size)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (i < (size - 1))
		{
			dst[i] = src[i];
		}
		i++;
		dst[i] = '\0';
	}
	return (i);
}
