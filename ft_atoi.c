/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:12:39 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 16:55:23 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The atoi() function converts the initial portion of the string pointed to
by nptr to int. The behavior is the same as strtol(nptr, NULL, 10); except that
atoi() does not detect errors.

The string may begin with an arbitrary amount of white space (as determined by
isspace(3)) followed by a single optional '+' or '-' sign.
The remainder of the string is converted to a long value in the obvious manner,
stopping at the first character which is not a valid digit in the given base.

Returns the converted value or 0 on error. */

int	ft_atoi(const char *str)
{
	int	integer;
	int	sign;

	integer = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
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
