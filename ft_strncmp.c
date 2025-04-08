/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:43:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/08 15:43:00 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	result = 0;
	i = 0;
	while ((s1[i] || s2[i]) && i < n && result == 0)
	{
		result = s1[i] - s2[i];
		i++;
	}
	return (result);
}
