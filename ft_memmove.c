/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:32:26 by danielji          #+#    #+#             */
/*   Updated: 2025/04/09 10:32:28 by danielji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The purpose of memmove() is to copy a block of memory from one place to
another, just like memcpy(), but safely, even if the source and destination
memory areas overlap.

It looks at the source and destination memory addresses.
If the destination is BEFORE the source in memory (no overlap or safe overlap),
it copies the bytes forward, from the start to the end.

If the destination is AFTER the source and there's a chance of overlap,
it copies the bytes backward, from the end to the start.
This prevents overwriting source data before it's copied.

After copying all the bytes, it returns the destination pointer.

https://marmota.medium.com/c-language-making-memmove-def8792bb8d5
*/

void	*memmove(void *dest, void *src, int n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char)dest;
	csrc = (char)src;
	if (dest <= src)
	{
		while (n--)
		{
			*cdest++ = *csrc++;
		}
	}
	if (dest > src)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
		{
			*cdest-- = *csrc--;
		}
	}
	return (dest);
}
