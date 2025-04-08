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

/*

The strnstr() function locates the first occurrence of the null-terminated
string LITTLE in the string BIG, where not more than LEN characters are
searched.
Characters that appear after a ‘\0’ character are not searched.

If LITTLE is an empty string, BIG is returned.
If LITTLE occurs nowhere in BIG, NULL is returned.
Otherwise a pointer to the first character of the first occurrence of
LITTLE is returned.
*/

#include <stdio.h>

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
	return (NULL);
}

int	main(void)
{
	char *big = "FooBarBaz";
	char *little = "Baz";
	char *ptr;

	ptr = ft_strnstr(big, little, 5);
	printf("%s", ptr);
}
