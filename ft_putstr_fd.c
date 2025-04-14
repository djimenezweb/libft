/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:19:31 by danielji          #+#    #+#             */
/*   Updated: 2025/04/14 14:48:22 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while(*s)
	{
		write(fd, &*s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

int main(void)
{
	ft_putstr_fd("hola", 1);
}
