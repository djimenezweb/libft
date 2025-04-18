/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:30:59 by danielji          #+#    #+#             */
/*   Updated: 2025/04/18 09:53:04 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.

lst: un puntero al primer nodo.

f: un puntero a la función que utilizará cada nodo. 

your lstiter does not work with basic input
Test code:
	t_list *l = lstnew(strdup("KO !"));

	l->next = lstnew(strdup("KO !"));
	l->next->next = lstnew(strdup("KO !"));
	ft_lstiter(l, lstiter_f);
	if (!strcmp(l->content, "OK !") && !strcmp(l->next->content, "OK !") && !strcmp(l->next->next->content, "OK !"))
		exit(TEST_SUCCESS);
	exit(TEST_FAILED);

*/

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	while(ptr)
	{
		f(ptr);
		ptr = ptr->next;
	}
}
