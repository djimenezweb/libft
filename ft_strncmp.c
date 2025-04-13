/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:43:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 17:19:37 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	result = 0;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] || s2[i]) && i < n && result == 0)
	{
		result = s1[i] - s2[i];
		i++;
	}
	return (result);
}
