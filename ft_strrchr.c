/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:24:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/13 15:59:19 by danielji         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char	*ft_strrchr(char *str, int c)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (ptr >= str)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr--;
	}
	return ('\0');
}
