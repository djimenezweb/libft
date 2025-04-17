/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:29:41 by danielji          #+#    #+#             */
/*   Updated: 2025/04/17 11:30:32 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* 

Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo,
utilizando la función ’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.

lst: la dirección de un puntero a un nodo.

del: un puntero a función utilizado para eliminar el contenido de un nodo.

*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{

}