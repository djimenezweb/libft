/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:36:50 by danielji          #+#    #+#             */
/*   Updated: 2025/04/09 09:36:54 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
https://stackoverflow.com/questions/76154111/what-are-the-correct-types-for-memset-function

Recibimos void *s
Creamos e inicializamos unsigned char *str = s.
Modificamos str pero al devolver s tiene los mismos cambios... ¿Por qué?
*/

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = c;
		str++;
		n--;
	}
	return (s);
}

int	main(void)
{
	char str[] = "---------";
	printf("%s\n", str);
	ft_memset(str, '$', 10);
	printf("%s\n", str);
}
