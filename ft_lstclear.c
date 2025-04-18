/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:29:41 by danielji          #+#    #+#             */
/*   Updated: 2025/04/18 18:24:27 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo,
utilizando la función ’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.

lst: la dirección de un puntero a un nodo.

del: un puntero a función utilizado para eliminar el contenido de un nodo.

your lstclear does not work with basic input
Test code:
	t_list *l = lstnew(strdup("nyancat"));

	l->next = lstnew(strdup("#TEST#"));
	ft_lstclear(&l, lstdelone_f);
	write(2, "", 1);
	if (!l)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

	Al final, el puntero a la lista debe ser NULL.
	**lst = ((void )*0);
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	node = *lst;
	while (node)
	{
		next = node;
		node = node->next;
		del(next);
		free(next);
	}
}
