/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:32:36 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:30:23 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo.
(¿usar ft_lstiter?)
Crea una lista resultante de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido
de un nodo, si hace falta.

lst:	un puntero a un nodo.
f:		la dirección de un puntero a una función usada
		en la iteración de cada elemento de la lista.
del:	un puntero a función utilizado para eliminar
		el contenido de un nodo, si es necesario.

Devuelve la nueva lista o NULL si falla la reserva de memoria.
Funciones autorizadas: malloc, free */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = ft_lstnew(f(lst->content));
	return (new_list);
}
