/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:19:31 by danielji          #+#    #+#             */
/*   Updated: 2025/04/14 14:51:28 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	if (n / 10 > 0)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = (n % 10) + 48;
	write(fd, &c, 1);
}

int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
}
