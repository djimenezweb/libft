/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:54:09 by danielji          #+#    #+#             */
/*   Updated: 2025/04/16 10:15:06 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

/* 
Aplica la función ’f’ a cada carácter de la cadena
’s’, pasando su índice como primer argumento y el
propio carácter como segundo argumento. Se crea una
nueva cadena (utilizando malloc(3)) para recoger
los resultados de las sucesivas aplicaciones de ’f’.

Devuelve la string creada tras el correcto uso de ’f’ sobre cada carácter.
o NULL si falla la reserva de memoria.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(str) + 1);
	if (!str)
	{
		return ((void *)0);
	}
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
