/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:28:40 by danielji          #+#    #+#             */
/*   Updated: 2025/04/16 12:35:43 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static int	numlen(int n)
{
	int				len;
	long long	num;

	len = 0;
	num = n;
	if (num == 0)
	{
		len++;
	}
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	int				is_neg;
	char			*str;
	long long	num;

	num = n;
	is_neg = 0;
	if (num < 0)
	{
		is_neg = 1;
		num *= -1;
	}
	len = numlen(num) + is_neg;
	str = malloc(len + 1);
	if (!str)
		return ((void *)0);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = (num % 10) + '0';
		len--;
		num = num / 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

/* int	main(void)
{
	//          -2147483648LL
	// expects: -2147483648
	char *str = ft_itoa(-2147483648LL);
	ft_putstr_fd(str, 1);
	free(str);
} */