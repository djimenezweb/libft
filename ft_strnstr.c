/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:53:00 by danielji          #+#    #+#             */
/*   Updated: 2025/04/08 15:53:00 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TO DO

#include <stdio.h>

char	*ft_strnstr(char *big, char *little, int len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
	{
		return (big);
	}
	while (i <= len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
			{
				return (big + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char *big = "Foo Bar Baz";
	char *little = "Bar";
	char *ptr;

	ptr = ft_strnstr(big, little, 4);
	printf("%s", ptr);
}