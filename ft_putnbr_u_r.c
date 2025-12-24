/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_r.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:23:33 by danielji          #+#    #+#             */
/*   Updated: 2025/12/24 18:58:43 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Output the unsigned integer `n` and return number of characters written */
ssize_t	ft_putnbr_u_r(unsigned int n)
{
	char	c;
	ssize_t	written;

	written = 0;
	if (n / 10 > 0)
	{
		written += ft_putnbr_u_r(n / 10);
	}
	c = (n % 10) + '0';
	written += write(1, &c, 1);
	return (written);
}
