/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:04:53 by danielji          #+#    #+#             */
/*   Updated: 2025/04/18 09:53:04 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* your lstadd_back does not work with basic input
Test code:
	t_list *l = lstnew(strdup("nyacat"));
	t_list *n = lstnew(strdup("OK"));

	ft_lstadd_back(&l, n);
	if (l->next == n && !strcmp(l->next->content, "OK"))
	{
		exit(TEST_SUCCESS);
	}
	exit(TEST_FAILED);

Test code:
	t_list *l = lstnew(strdup("nyacat"));
	t_list *n = lstnew(strdup("OK"));

	ft_lstadd_back(&l, n);
	if (l->next == n && !strcmp(l->next->content, "OK"))
	{
		free(l->next);
		free(l);
		exit(TEST_SUCCESS);
	}
	free(l->next);
	free(l);
	exit(TEST_FAILED); */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
	{
		*lst = new;
	}
}
