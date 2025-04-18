/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <danielji@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:24:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/18 18:24:00 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Error in test 5: ft_strrchr(0x5beb447850a7: "teste", 1125: 'e'):
expected: 0x5beb447850ab, yours: (nil)

Error in test 6: ft_strrchr(0x5beb447850a7: "teste", 1024: '\0'):
expected: 0x5beb447850ac, yours: (nil)
*/

char	*ft_strrchr(const char *str, int c)
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
	return ((void *)0);
}
