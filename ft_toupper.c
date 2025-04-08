/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:10:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/07 16:10:00 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (c - 32);
	}

	return (c);
}
