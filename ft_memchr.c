/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:55:10 by danielji          #+#    #+#             */
/*   Updated: 2025/04/09 10:55:13 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memchr() function scans the initial n bytes of the memory area pointed to
by s for the first instance of c.

Both c and the bytes of the memory area pointed to by s are interpreted as
unsigned char.

Returns a pointer to the matching byte or NULL if the character does not occur
in the given memory area.
*/

void	*memchr(void *s, int c, int n)
{
	unsigned char	*cs;
	unsigned char	cc;

	cs = (unsigned char)s;
	cc = (unsigned char)c;
	while (*cs)
	{
		if (*cs == cc)
		{
			return (cs);
		}
		cs++;
	}
}
