/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:19:31 by danielji          #+#    #+#             */
/*   Updated: 2025/12/24 18:58:56 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Output the string `s` and return number of characters written.*/
ssize_t	ft_putstr_r(char *s)
{
	ssize_t	written;

	written = 0;
	if (!s)
		written += write(1, "(null)", 6);
	while (s && *s)
	{
		written += write(1, s, 1);
		s++;
	}
	return (written);
}
