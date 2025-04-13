/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:53:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 16:01:29 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char	*ft_strnstr(char *big, char *little, int len)
{
	int	i_big;
	int	i_little;

	i_big = 0;
	if (little[0] == '\0')
	{
		return (big);
	}
	while (big[i_big] && i_big <= len - 1)
	{
		i_little = 0;
		while (big[i_big + i_little] == little[i_little]
			&& i_big + i_little < len && little[i_little])
		{
			i_little++;
		}
		if (little[i_little] == '\0')
			return (&big[i_big]);
		i_big++;
	}
	return (0);
}
