/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:36:50 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 15:57:21 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/*
https://stackoverflow.com/questions/76154111/what-are-the-correct-types-for-memset-function

Recibimos void *s
Creamos e inicializamos unsigned char *str = s.
Modificamos str pero al devolver s tiene los mismos cambios... ¿Por qué?
*/

void	*ft_memset(void *s, int c, int n)
{
/* 	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = c;
		str++;
		n--;
	}
	return (s); */
}
