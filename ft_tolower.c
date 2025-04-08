/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:16:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/07 16:16:00 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (c + 32);
	}

	return (c);
}
