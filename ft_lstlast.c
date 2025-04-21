/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:11:54 by danielji          #+#    #+#             */
/*   Updated: 2025/04/20 17:26:19 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Devuelve el último nodo de la lista.
lst: el principio de la lista. 
t1:KO t2:KO t3:KO t4:KO */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
