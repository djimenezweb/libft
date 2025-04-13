/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:12:39 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 16:01:49 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_atoi(char *str)
{
	int	integer;
	int	sign;

	integer = 0;
	sign = 1;
	while (*str >= 9 && *str <= 13 || *str == ' ')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		integer = (integer * 10) + *str - '0';
		str++;
	}
	return (integer * sign);
}
