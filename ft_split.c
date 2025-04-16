/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:53:25 by danielji          #+#    #+#             */
/*   Updated: 2025/04/16 15:22:24 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

/* 

Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador.
El array debe terminar con un puntero NULL.

Devuelve:
- El array de nuevas strings resultante de la separación.
- NULL si falla la reserva de memoria.

Funciones autorizadas: malloc, free

 */


char	**ft_split(char const *s, char c)
{
	int				i;
	unsigned int	start;
	unsigned int	end;
	size_t			len;
	char 			*str;
	char			**arr;

	i = 0;
	start = 0;
	end = 0;
	str = s;
	while(str[i])
	{
		if (str[i] = c)
		{

		}
		i++;
	}
}
