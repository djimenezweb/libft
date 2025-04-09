/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:12:39 by danielji          #+#    #+#             */
/*   Updated: 2025/04/09 09:12:41 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	integer;
	int	is_negative;

	integer = 0;
	is_negative = 1;
	while (*str >= 9 && *str <= 13 || *str == ' ')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			is_negative = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		integer = (integer * 10) + *str - '0';
		str++;
	}
	return (integer * is_negative);
}
