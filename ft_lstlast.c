/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:11:54 by danielji          #+#    #+#             */
/*   Updated: 2025/04/18 09:53:04 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* your lstlast does not work with basic input
Test code:
	t_list *l;
	t_list *expected;
	t_list *actual;

	l = lstnew(strdup("1"));
	l->next = lstnew(strdup("2"));
	l->next->next = lstnew(strdup("3"));
	expected = l->next->next;
	actual = ft_lstlast(l);
	if (actual == expected)
		exit(TEST_SUCCESS);
	exit(TEST_FAILED); */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		lst = lst->next;
	}
	return (lst);
}
