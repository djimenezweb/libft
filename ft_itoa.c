/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:28:40 by danielji          #+#    #+#             */
/*   Updated: 2025/04/16 10:36:34 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_neg;
	char	*str;

	is_neg = 0;
	if (n < 0)
	{
		is_neg = 1;
		n *= -1;
	}
	len = numlen(n) + is_neg;
	str = malloc(len + 1);
	if (!str)
		return ((void *)0);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = (n % 10) + '0';
		len--;
		n = n / 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

/* int	main(void)
{
	char *str = ft_itoa(-75412);
	ft_putstr_fd(str, 1);
	free(str);
} */