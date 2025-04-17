/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:32:36 by danielji          #+#    #+#             */
/*   Updated: 2025/04/17 17:53:09 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

/* Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo.
Crea una lista resultante de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo.
La función ’del’ se utiliza para eliminar el contenido de un nodo, si hace
falta.

Parámetros:
	- lst: un puntero a un nodo.
	
	- f: la dirección de un puntero a una función usada en la iteración de cada
		elemento de la lista.
	
	- del: un puntero a función utilizado para eliminar el contenido de un nodo,
		si es necesario.

Devuelve la nueva lista.
	ó NULL si falla la reserva de memoria.

Funciones autorizadas: malloc, free */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	
}
